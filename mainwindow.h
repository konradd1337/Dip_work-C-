#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int num_menu = 7, count = 7, dell_num = 1;
    double r = 0;
    std::vector<int> checkradio;
    std::vector<QString> data_name;
    std::vector<double> data_set[4];

private slots:

    void on_dell_button_clicked();

    void on_add_button_clicked();

    void on_Clear_button_clicked();

    void on_open_file_triggered();

    void on_save_file_triggered();

    void on_new_file_triggered();

    void on_get_button_clicked();

    void on_back_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
