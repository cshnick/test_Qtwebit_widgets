#ifndef GRAPHICSPROXYSIMPLEBROWSER_H
#define GRAPHICSPROXYSIMPLEBROWSER_H

#include <QGraphicsWidget>
#include <QGraphicsProxyWidget>
#include <QLabel>
#include <QToolButton>

class GraphicsProxySimpleBrowser : public QGraphicsWidget
{
    Q_OBJECT
public:
    explicit GraphicsProxySimpleBrowser(QGraphicsItem *parent = 0);
    
private slots:
    void on_mCloseButton_clicked();

private:
    QGraphicsProxyWidget *mGraphicsWebView;
    QLabel *mLabel;
    QToolButton *mCloseButton;
    
};

#endif // GRAPHICSPROXYSIMPLEBROWSER_H
