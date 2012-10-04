#ifndef SIMPLEBROWSER_H
#define SIMPLEBROWSER_H

#include <QWidget>
#include <QUrl>

namespace Ui {
class SimpleBrowser;
}

class SimpleBrowser : public QWidget
{
    Q_OBJECT
    
public:
    static const QString mDefaultUrl;

    explicit SimpleBrowser(QWidget *parent = 0);
    ~SimpleBrowser();

private slots:
    void on_lineEdit_returnPressed();
    void on_toolButton_3_clicked();
    void on_webView_urlChanged(QUrl);
    void load();

private:
    QString adjustToUrl(const QString &str);
    
private:
    Ui::SimpleBrowser *ui;
};

#endif // SIMPLEBROWSER_H
