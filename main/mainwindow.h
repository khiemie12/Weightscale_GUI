#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
union ByteToFloat{
        float myfloat;
        char mybyte[5];
    } m_data;
private slots:
        void readData();
         void fillPortAction();
         void on_btn_SetUart_clicked();

         void on_btn_closeUart_clicked();

         void on_btn_send_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
