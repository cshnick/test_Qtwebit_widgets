#ifndef WEBWINDOW_H
#define WEBWINDOW_H

#include <QMainWindow>

#include <QUrl>

class SimpleBrowser;
class QGraphicsScene;



namespace Ui {
class WebWindow;
//const char* commonDefaultUrl = "vimeo.com";
}

class WebWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WebWindow(QWidget *parent = 0);
    ~WebWindow();
    
private slots:
    void on_toolButton_10_clicked();
    void on_toolButton_11_clicked();
    void on_toolButton_12_clicked();
    void on_toolButton_13_clicked();
    void on_toolButton_14_clicked();
    void on_toolButton_15_clicked();
    void on_toolButton_16_clicked();
    void on_toolButton_17_clicked();
    void on_toolButton_18_clicked();
    void on_toolButton_19_clicked();

    void on_toolButton_clicked();
    void on_toolButton_2_clicked();
    void on_toolButton_3_clicked();
    void on_toolButton_4_clicked();
    void on_toolButton_5_clicked();
    void on_toolButton_6_clicked();
    void on_toolButton_7_clicked();
    void on_toolButton_8_clicked();
    void on_toolButton_9_clicked();

private:
    Ui::WebWindow *ui;

    SimpleBrowser *mSimpleBrowser;
    QGraphicsScene *mScene;


};

#endif // WEBWINDOW_H
