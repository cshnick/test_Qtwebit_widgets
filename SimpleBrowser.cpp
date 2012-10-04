#include "SimpleBrowser.h"
#include "ui_simplebrowser.h"

#include "WebWindow.h"
#include <QtGui>

SimpleBrowser::SimpleBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimpleBrowser)
{
    ui->setupUi(this);

    QWebSettings *gs = QWebSettings::globalSettings();
    gs->setAttribute(QWebSettings::JavaEnabled, true);
    gs->setAttribute(QWebSettings::PluginsEnabled, true);
    gs->setAttribute(QWebSettings::LocalStorageDatabaseEnabled, true);
    gs->setAttribute(QWebSettings::OfflineWebApplicationCacheEnabled, true);
    gs->setAttribute(QWebSettings::OfflineStorageDatabaseEnabled, true);
    gs->setAttribute(QWebSettings::JavascriptCanAccessClipboard, true);
    gs->setAttribute(QWebSettings::DnsPrefetchEnabled, true);

    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);

    connect(ui->webView, SIGNAL(loadProgress(int)), ui->progressBar, SLOT(setValue(int)));
    connect(ui->webView, SIGNAL(loadStarted()), ui->progressBar, SLOT(show()));
    connect(ui->webView, SIGNAL(loadFinished(bool)), ui->progressBar, SLOT(hide()));
    connect(ui->toolButton_2, SIGNAL(clicked()), ui->webView, SLOT(back()));
    connect(ui->toolButton, SIGNAL(clicked()), ui->webView, SLOT(forward()));

    ui->lineEdit->setText("vimeo.com");
    load();
}

void SimpleBrowser::on_lineEdit_returnPressed()
{
    load();
}
void SimpleBrowser::on_toolButton_3_clicked()
{
    load();
}

void SimpleBrowser::on_webView_urlChanged(QUrl purl)
{
    ui->lineEdit->setText(purl.toString());
}

void SimpleBrowser::load()
{
    QString curUrl = adjustToUrl(ui->lineEdit->text());
    ui->lineEdit->setText(curUrl);
    ui->webView->load(QUrl(curUrl));
}

QString SimpleBrowser::adjustToUrl(const QString &str)
{
    QString result = str;

    if (QFileInfo(result.replace("file://", "")).exists()) {
        if (!result.startsWith("file://")) {
            result.prepend("file://");
        }
    } else if (!result.startsWith("http://")) {
        result.prepend("http://");
    }

    return result;
}

SimpleBrowser::~SimpleBrowser()
{
    delete ui;
}
