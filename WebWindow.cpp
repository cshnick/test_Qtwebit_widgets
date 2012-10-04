#include "WebWindow.h"
#include "ui_webwindow.h"

#include "SimpleBrowser.h"
#include "GraphicsSimpleBrowser.h"
#include "GraphicsProxySimpleBrowser.h"
#include <QtGui>

WebWindow::WebWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WebWindow)
  , mSimpleBrowser(0)
  , mScene(0)
{
    ui->setupUi(this);
    ui->mainToolBar->hide();

    int defaultIndex = 0;

    ui->listWidget->setCurrentRow(defaultIndex);
    ui->stackedWidget->setCurrentIndex(defaultIndex);

    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));

    mSimpleBrowser = new SimpleBrowser(this);
    ui->simpleBrowserLayout->addWidget(mSimpleBrowser);
    mSimpleBrowser->show();

    mScene = new QGraphicsScene(this);
    ui->graphicsView->setScene(mScene);
}

WebWindow::~WebWindow()
{
    delete ui;
}
//stack index 1
void WebWindow::on_toolButton_10_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_11_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_12_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_13_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_14_clicked()
{
   qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_15_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_16_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_17_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_18_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_19_clicked()
{
    qDebug() << sender()->objectName();
}


//stack index 2
void WebWindow::on_toolButton_clicked()
{
    qDebug() << sender()->objectName();

    GraphicsSimpleBrowser *qGraphicsWebView = new GraphicsSimpleBrowser();
    mScene->addItem(qGraphicsWebView);
}
void WebWindow::on_toolButton_2_clicked()
{
    qDebug() << sender()->objectName();

    GraphicsProxySimpleBrowser *qGraphicsProxyWidget = new GraphicsProxySimpleBrowser();
    mScene->addItem(qGraphicsProxyWidget);
}
void WebWindow::on_toolButton_3_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_4_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_5_clicked()
{
   qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_6_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_7_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_8_clicked()
{
    qDebug() << sender()->objectName();
}
void WebWindow::on_toolButton_9_clicked()
{
    qDebug() << sender()->objectName();
}
