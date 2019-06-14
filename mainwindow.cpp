#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <QWidget>
#include <qmath.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->win02->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

class GridLayoutUtil {

public:

    static void removeRow(QGridLayout *layout, int row, bool deleteWidgets = true) {
        remove(layout, row, -1, deleteWidgets);
        layout->setRowMinimumHeight(row, 0);
        layout->setRowStretch(row, 0);
    }

private:

    static void remove(QGridLayout *layout, int row, int column, bool deleteWidgets) {
        for (int i = layout->count() - 1; i >= 0; i--) {
            int r, c, rs, cs;
            layout->getItemPosition(i, &r, &c, &rs, &cs);
            if ( (row == -1 || (r <= row && r + rs > row)) && (column == -1 || (c <= column && c + cs > column))) {
                QLayoutItem *item = layout->takeAt(i);
                if (deleteWidgets)
                    deleteChildWidgets(item);
                delete item;
            }
        }
    }

    static void deleteChildWidgets(QLayoutItem *item) {
        QLayout *layout = item->layout();
         if (layout) {
            int itemCount = layout->count();
            for (int i = 0; i < itemCount; i++)
                deleteChildWidgets(layout->itemAt(i));
         }
        delete item->widget();
    }
};

void MainWindow::on_add_button_clicked()
{
    QLabel *TabNum = new QLabel();
    QLineEdit *TabName = new QLineEdit();
    QLineEdit *TabCost = new QLineEdit();
    QLineEdit *TabConsumption = new QLineEdit();
    QLineEdit *TabStorage = new QLineEdit();
    QLineEdit *TabDelivery = new QLineEdit();
    QCheckBox *TabCheck = new QCheckBox();

    num_menu++;
    count++;
    QString str = QString::number(num_menu);
    QString str1 = QString::number(count);
    TabNum->setText(str1);
    TabNum->setFont( QFont("Arial",10));

    TabNum->setObjectName("TabNum" + str);
    TabName->setObjectName("TabName" + str);
    TabCost->setObjectName("TabCost" + str);
    TabConsumption->setObjectName("TabConsumption" + str);
    TabStorage->setObjectName("TabStorage" + str);
    TabDelivery->setObjectName("TabDelivery" + str);
    TabCheck->setObjectName("TabCheck" + str);

    TabNum->setMinimumWidth(20);
    TabNum->setMaximumWidth(20);
    TabName->setMinimumWidth(130);
    TabName->setMaximumWidth(130);
    TabCost->setMinimumWidth(90);
    TabCost->setMaximumWidth(90);
    TabConsumption->setMinimumWidth(90);
    TabConsumption->setMaximumWidth(90);
    TabStorage->setMinimumWidth(140);
    TabStorage->setMaximumWidth(140);
    TabDelivery->setMinimumWidth(140);
    TabDelivery->setMaximumWidth(140);
    TabCheck->setMinimumWidth(30);
    TabCheck->setMaximumWidth(30);
    TabCheck->setLayoutDirection(Qt::RightToLeft);

    ui->gridLayout_3->addWidget(TabNum);
    ui->gridLayout_3->addWidget(TabName);
    ui->gridLayout_3->addWidget(TabCost);
    ui->gridLayout_3->addWidget(TabConsumption);
    ui->gridLayout_3->addWidget(TabStorage);
    ui->gridLayout_3->addWidget(TabDelivery);
    ui->gridLayout_3->addWidget(TabCheck);
}

void MainWindow::on_dell_button_clicked()
{
    int i, k=0;
    GridLayoutUtil dellrow;
    QString str;
    checkradio.resize(num_menu);
    for (i=0;i<num_menu;i++)
        checkradio[i] = 0;
    for (i=0;i<num_menu;i++) {
        QString str = QString::number(i+1);
        str = "TabCheck" + str;
        if (findChild<QCheckBox*>(str)) {
            QCheckBox *TabCheck = findChild<QCheckBox*>(str);
            if (TabCheck->checkState() != Qt::CheckState())
                checkradio[i] = 1;
            else
                checkradio[i] = 0;
        }
    }
    for (i=0;i<num_menu;i++)
        if (checkradio[i] == 1) {
            dellrow.removeRow(ui->gridLayout_3,i+2);
            count--;
        }
    for (i=0;i<num_menu;i++) {
        str = QString::number(i+1);
        if (findChild<QLabel*>("TabNum" + str)) {
            k++;
            QLabel *TabNum = findChild<QLabel*>("TabNum" + str);
            str = QString::number(k);
            TabNum->setText(str);
        }
    }
}

void MainWindow::on_Clear_button_clicked()
{
    int i;
    QString str;
    checkradio.resize(num_menu);
    for (i=0;i<num_menu;i++)
        checkradio[i] = 0;
    for (i=0;i<num_menu;i++) {
        str = QString::number(i+1);
        str = "TabCheck" + str;
        if (findChild<QCheckBox*>(str)) {
            QCheckBox *TabCheck = findChild<QCheckBox*>(str);
            if (TabCheck->checkState() != Qt::CheckState())
                checkradio[i] = 1;
            else
                checkradio[i] = 0;
        }
    }
    for (i=0;i<num_menu;i++)
        if (checkradio[i] == 1) {
            str = QString::number(i+1);
            QLineEdit *TabName = findChild<QLineEdit*>("TabName" + str);
            QLineEdit *TabCost = findChild<QLineEdit*>("TabCost" + str);
            QLineEdit *TabConsumption = findChild<QLineEdit*>("TabConsumption" + str);
            QLineEdit *TabStorage = findChild<QLineEdit*>("TabStorage" + str);
            QLineEdit *TabDelivery = findChild<QLineEdit*>("TabDelivery" + str);

            TabName->setText("");
            TabCost->setText("");
            TabConsumption->setText("");
            TabStorage->setText("");
            TabDelivery->setText("");
        }
}

void MainWindow::on_open_file_triggered()
{
    int i;
    QString str, str_d[5];
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Data (*.txt)"));
    QFile file(fileName);
    if ((file.exists())&&(file.open(QIODevice::ReadOnly))) {
        file.open(QIODevice::ReadOnly);
        for (i=0;i<num_menu;i++) {
            str = QString::number(i+1);
            if (findChild<QCheckBox*>("TabCheck" + str)) {
                QCheckBox *TabCheck = findChild<QCheckBox*>("TabCheck" + str);
                TabCheck->setChecked(true);
            }
        }
        on_dell_button_clicked();
        while(!file.atEnd()) {
            on_add_button_clicked();
            str = QString::number(num_menu);
            QLineEdit *TabName = findChild<QLineEdit*>("TabName" + str);
            QLineEdit *TabCost = findChild<QLineEdit*>("TabCost" + str);
            QLineEdit *TabConsumption = findChild<QLineEdit*>("TabConsumption" + str);
            QLineEdit *TabStorage = findChild<QLineEdit*>("TabStorage" + str);
            QLineEdit *TabDelivery = findChild<QLineEdit*>("TabDelivery" + str);

            for (int j=0;j<5;j++)
                str_d[j] = file.readLine();
            TabName->setText(str_d[0]);
            TabCost->setText(str_d[1]);
            TabConsumption->setText(str_d[2]);
            TabStorage->setText(str_d[3]);
            TabDelivery->setText(str_d[4]);
        }
    }
    file.close();
}

void MainWindow::on_save_file_triggered()
{
    int i, k = 0;
    QString str, str_d[4];
    QString DName[count];
    double data[count][4];
    for (i=0;i<num_menu;i++) {
        str = QString::number(i+1);
        if (findChild<QLabel*>("TabNum" + str)) {
            QLineEdit *TabName = findChild<QLineEdit*>("TabName" + str);
            QLineEdit *TabCost = findChild<QLineEdit*>("TabCost" + str);
            QLineEdit *TabConsumption = findChild<QLineEdit*>("TabConsumption" + str);
            QLineEdit *TabStorage = findChild<QLineEdit*>("TabStorage" + str);
            QLineEdit *TabDelivery = findChild<QLineEdit*>("TabDelivery" + str);

            DName[k] = TabName->text();
            for (int j=0;j<DName[k].size();j++)
                if (DName[k][j] == '\n')
                    DName[k][j] = '\0';
            str_d[0] = TabCost->text();
            str_d[1] = TabConsumption->text();
            str_d[2] = TabStorage->text();
            str_d[3] = TabDelivery->text();
            for (int j=0;j<4;j++)
                data[k][j] = str_d[j].toDouble();
            k++;
        }
    }

    QString fileName = QFileDialog::getSaveFileName(this, tr("Open File"),"",tr("Data (*.txt)"));
    QFile file(fileName);
    file.open(QIODevice::WriteOnly);
    if (file.exists()) {
        QTextStream out(&file);
        for (i=0;i<k;i++) {
            if (DName[i] != "") {
                out << DName[i] << endl;
                out << data[i][0] << endl;
                out << data[i][1] << endl;
                out << data[i][2] << endl;
                out << data[i][3] << endl;
            }
        }
    }
    file.close();
}

void MainWindow::on_new_file_triggered()
{
    int i;
    for (i=0;i<num_menu;i++) {
        QString str = QString::number(i+1);
        if (findChild<QCheckBox*>("TabCheck" + str)) {
            QCheckBox *TabCheck = findChild<QCheckBox*>("TabCheck" + str);
            TabCheck->setChecked(true);
        }
    }
    on_dell_button_clicked();
    for (i=0;i<7;i++)
        on_add_button_clicked();
}

void MainWindow::on_get_button_clicked()
{
    int i, k = 0;
    double T = 0, C0 = 0, q[count], total_cost = 0, total_delivery = 0, total_storage = 0;
    QString str, str_d[4];
    data_name.resize(count);
    for (i=0;i<4;i++)
        data_set[i].resize(count);

    for (i=0;i<num_menu;i++) {
        str = QString::number(i+1);
        if (findChild<QLabel*>("TabNum" + str)) {
            QLineEdit *TabName = findChild<QLineEdit*>("TabName" + str);
            QLineEdit *TabCost = findChild<QLineEdit*>("TabCost" + str);
            QLineEdit *TabConsumption = findChild<QLineEdit*>("TabConsumption" + str);
            QLineEdit *TabStorage = findChild<QLineEdit*>("TabStorage" + str);
            QLineEdit *TabDelivery = findChild<QLineEdit*>("TabDelivery" + str);

            data_name[k] = TabName->text();
            for (int j=0;j<data_name[k].size();j++)
                if (data_name[k][j] == '\n')
                    data_name[k][j] = '\0';
            str_d[0] = TabCost->text();
            str_d[1] = TabConsumption->text();
            str_d[2] = TabStorage->text();
            str_d[3] = TabDelivery->text();
            for (int j=0;j<4;j++)
                data_set[j][k] = str_d[j].toDouble();
            if (data_name[k] == "")
                for (int j=0;j<4;j++)
                    data_set[j][k] = 0;
            k++;
        }
    }
    ui->win01->hide();
    ui->menuBar->setEnabled(false);

    for (i=0;i<count;i++)
        C0 += data_set[3][i];

    QRadioButton *Model_1 = findChild<QRadioButton*>("model_1");
    QRadioButton *Model_2 = findChild<QRadioButton*>("model_2");
    QRadioButton *Model_3 = findChild<QRadioButton*>("model_3");
    QRadioButton *Model_4 = findChild<QRadioButton*>("model_4");

    double cosalfa, DCh = 0, DC0 = 0, Z0;
    QLineEdit *Year_cost = findChild<QLineEdit*>("year_cost");
    r = Year_cost->text().toDouble();
    for (i=0;i<count;i++)
        T += data_set[1][i] * data_set[2][i];
    T = sqrt( (2 * C0) / T);
    for (i=0;i<count;i++) {
        DCh += data_set[1][i] * data_set[2][i];
        DC0 += data_set[1][i] * (data_set[3][i] + data_set[0][i]);
    }

    if (Model_1->isChecked())
        ui->label_18->setText("Без урахуванням тимчасової\nвартості грошей");

    if (Model_2->isChecked()) {
        cosalfa = 3*r * sqrt( (3*C0 * DCh*DCh) / (2 * (DCh + r*DC0)*(DCh + r*DC0)*(DCh + r*DC0)) );
        cosalfa = cos(acos(cosalfa) / 3);
        Z0 = 2* sqrt( 1/3 + (r/3) * (DC0/DCh) ) * cosalfa;
        T = T / Z0;
        ui->label_18->setText("Виплата витрат на зберігання\n'пренумерандо'");
    }

    if (Model_3->isChecked()) {
        cosalfa = (-r / (1+r)) * sqrt( (27*C0 * DCh*DCh) / (2 * (DCh + r*DC0)*(DCh + r*DC0)*(DCh + r*DC0)) );
        cosalfa = cos(acos(cosalfa) / 3);
        Z0 = 2* sqrt( 1/3 + (r/3) * (DC0/DCh) ) * cosalfa;
        T = T / Z0;
        ui->label_18->setText("Виплата витрат на зберігання\n'постнумерандо'");
    }

    if (Model_4->isChecked()) {
        T = sqrt( 2*C0 / (DCh + r*DC0) );
        ui->label_18->setText("Виплата витрат на зберігання\nу середені інтервалу");
    }

    if (r == 0) {
        T = 0;
        for (i=0;i<count;i++)
            T += data_set[1][i] * data_set[2][i];
        T = sqrt( (2 * C0) / T);
        ui->label_18->setText("Без урахуванням тимчасової\nвартості грошей");
    }

    for (i=0;i<count;i++)
        q[i] = data_set[1][i] * T;

    for (i=0;i<count;i++) {
        total_cost += data_set[0][i] * int(q[i]) / 2;
        total_storage += data_set[2][i] * int(q[i]) / 2;
        total_delivery += data_set[3][i] / T;
    }

    ui->label_8->setText(QString::number(int(T * 365)) + " Днів");
    ui->label_12->setText(QString::number(total_cost, 'f', 2) + " у.о.");
    ui->label_14->setText(QString::number(total_storage, 'f', 2) + " у.о.");
    ui->label_16->setText(QString::number(total_delivery, 'f', 2) + " у.о.");
    for (i=0;i<count;i++) {
        if (data_name[i] != "") {
            QLabel *ResNum = new QLabel();
            QLabel *ResName = new QLabel();
            QLabel *Res = new QLabel();

            ResNum->setFont( QFont("Arial",10));
            ResName->setFont( QFont("Arial",10));
            Res->setFont( QFont("Arial",10));

            ResNum->setText(QString::number(i+1));
            ResName->setText(data_name[i]);
            Res->setText(QString::number(int(q[i])));

            ui->gridLayout_4->addWidget(ResNum);
            ui->gridLayout_4->addWidget(ResName);
            ui->gridLayout_4->addWidget(Res);
        }
    }

    double a = 0;
    double b = int(T*365);
    double h = 0.1;
    int N = int( (b - a) / h + 2 );
    QVector<double> x[count], y[count];

    for (i=0;i<count;i++) {
        x[i].resize(N);
        y[i].resize(N);
    }

    for (int j=0;j<count;j++) {
        i = 0;
        for (double X=b; X>=a; X-=h) {
            x[j][i] = b - X;
            y[j][i] = data_set[1][j] * X / 365;
            i++;
         }
    }
    ui->graph->clearGraphs();
    for (i=0;i<count;i++) {
        ui->graph->addGraph();
        ui->graph->graph(i)->setData(x[i], y[i]);
    }
    ui->graph->xAxis->setLabel("Дні");
    ui->graph->yAxis->setLabel("Об'єм запасів");
    ui->graph->xAxis->setRange(a, b+1);

    double maxY = q[0];
    for (i=0; i<count; i++)
        if (q[i]>maxY) maxY = q[i];
    ui->graph->yAxis->setRange(0, maxY);
    ui->graph->replot();

    ui->win02->show();
}

void MainWindow::on_back_button_clicked()
{
    ui->win02->hide();
    GridLayoutUtil dellrow;
    dell_num++;
    for (int i=0;i<count*dell_num;i++)
        dellrow.removeRow(ui->gridLayout_4,i+1);
    ui->menuBar->setEnabled(true);
    ui->win01->show();
}
