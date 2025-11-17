#ifndef TCPFILESENDER_H
#define TCPFILESENDER_H

#include <QDialog>
#include <QtNetwork>
#include <QtWidgets>
class Tcpfilesender : public QDialog
{
    Q_OBJECT

public:
    Tcpfilesender(QWidget *parent = nullptr);
    ~Tcpfilesender();
public slots:
    void start();
    void startTransfer();
    void updateClientProgress(qint64 numBytes);
    void openFile();
private:
    QProgressBar *clientProgressBar;
    QLabel *clientStatusLabel;
    QPushButton* startButton;
    QPushButton* quitButton;
    QPushButton* openButton;
    QDialogButtonBox *buttonBox;
    QTcpSocket tcpClient;

    qint64 totalBytes;
    qint64 bytesWritten;
    qint64 bytesToWrite;
    qint64 loadSize;
    QString fileName;
    QFile *localFile;
    QByteArray outBlock;
};
#endif // TCPFILESENDER_H
