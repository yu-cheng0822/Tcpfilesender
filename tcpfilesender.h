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
    QPushButton *startButton,quitButton,opneButton;
    QDialogButtonBox *buttonBox;
    QTcpSocket tcpClient;


};
#endif // TCPFILESENDER_H
