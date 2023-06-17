#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtDebug>
#include<QTimer>
QSerialPort SerialPort;
QTimer *timer,Uart_timer;
static float readvalue;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Uart_timer.setInterval(1000);

    connect(&Uart_timer,SIGNAL(timeout()),this,SLOT(readData()));
    fillPortAction();
}
void MainWindow::readData()
{
        QByteArray byte_data = SerialPort.readAll();



                          qDebug() <<byte_data; //doc tin hieu serial port

                           qDebug() <<byte_data[1];
                           qDebug() <<byte_data[2];
                           qDebug() <<byte_data[3];
                           qDebug() <<byte_data[4];
                          readvalue= byte_data[4]-48 + (byte_data[3]-48)*10 + (byte_data[2]-48)*100 + (byte_data[1]-48)*1000 ;// chuyen doi ascii
                          qDebug() << readvalue;
                          ui->lcdNumber->display(readvalue);

}
void MainWindow::fillPortAction()
{
    const auto infos = QSerialPortInfo::availablePorts();
    for(const QSerialPortInfo &info : infos)
    {
        ui->ComUart->addItem(info.portName());
    }
    ui->baudRateBox->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->baudRateBox->addItem(QStringLiteral("19200"),QSerialPort::Baud19200);
    ui->baudRateBox->addItem(QStringLiteral("38400"),QSerialPort::Baud38400);
    ui->baudRateBox->addItem(QStringLiteral("115200"),QSerialPort::Baud115200);
    ui->baudRateBox->addItem(tr("Custom"));

    ui->dataBitsBox->addItem(QStringLiteral("5"), QSerialPort::Data5);
    ui->dataBitsBox->addItem(QStringLiteral("6"), QSerialPort::Data6);
    ui->dataBitsBox->addItem(QStringLiteral("7"), QSerialPort::Data7);
    ui->dataBitsBox->addItem(QStringLiteral("8"), QSerialPort::Data8);
    //ui->dataBitsBox->hide();
    ui->dataBitsBox->setCurrentIndex(3);

    ui->parityBox->addItem(tr("None"), QSerialPort::NoParity);
    //ui->parityBox->hide();
    ui->parityBox->addItem(tr("Even"), QSerialPort::EvenParity);
    ui->parityBox->addItem(tr("Odd"), QSerialPort::OddParity);
    ui->parityBox->addItem(tr("Mark"), QSerialPort::MarkParity);
    ui->parityBox->addItem(tr("Space"), QSerialPort::SpaceParity);


    ui->stopBitsBox->addItem(QStringLiteral("1"), QSerialPort::OneStop);
   // ui->stopBitsBox->hide();
    ui->stopBitsBox->addItem(QStringLiteral("2"), QSerialPort::TwoStop);

    ui->flowControlBox->addItem(tr("None"), QSerialPort::NoFlowControl);
    //ui->flowControlBox->hide();
    ui->flowControlBox->addItem(tr("RTS/CTS"),QSerialPort::HardwareControl);
    ui->flowControlBox->addItem(tr("XON/XOFF"),QSerialPort::SoftwareControl);
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_SetUart_clicked()
{
    SerialPort.setPortName(ui->ComUart->currentText());
    SerialPort.setBaudRate(ui->baudRateBox->currentText().toInt());
    SerialPort.setDataBits(static_cast<QSerialPort::DataBits>(
    ui->dataBitsBox->itemData(ui->dataBitsBox->currentIndex()).toInt()));
    SerialPort.setParity(static_cast<QSerialPort::Parity>(ui->parityBox->itemData(ui->parityBox->currentIndex()).toInt()));
    SerialPort.setStopBits(static_cast<QSerialPort::StopBits>(
    ui->stopBitsBox->itemData(ui->stopBitsBox->currentIndex()).toInt()));
    SerialPort.setFlowControl(static_cast<QSerialPort::FlowControl>(
    ui->flowControlBox->itemData(ui->flowControlBox->currentIndex()).toInt()));
    SerialPort.open(QIODevice::ReadWrite);
    //connect(SerialPort, &QSerialPort::readyRead, this,&MainWindow::readData);
    Uart_timer.start(40);
    // Interval 0 means to refresh as fast as possible
}


void MainWindow::on_btn_closeUart_clicked()
{
        SerialPort.close();
}


void MainWindow::on_btn_send_clicked()
{
    QByteArray txbuff;
        QString text;

        txbuff[0]='S';
        txbuff[1]='L';
        //...
        txbuff[19]='O';

        SerialPort.write(txbuff,20);

}

