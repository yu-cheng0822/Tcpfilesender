#include "tcpfilesender.h"

Tcpfilesender::Tcpfilesender(QWidget *parent)
    : QDialog(parent)
{
    loadSize=1024*4;
    totalBytes=0;
    bytesWritten=0;
    bytesToWrite=0;
    clientProgressBar=new QProgressBar;
    clientStatusLabel=new QLabel(tr("客戶端就緒"));
    startButton= new QPushButton(tr("開始"));
    quitButton= new QPushButton(tr("退出"));
    openButton= new QPushButton(tr("開檔"));
    startButton->setEnabled(false);
    buttonBox = new QDialogButtonBox;
    buttonBox->addButton(startButton, QDialogButtonBox:: ActionRole);
    buttonBox->addButton (openButton, QDialogButtonBox:: ActionRole);
    buttonBox->addButton (quitButton, QDialogButtonBox:: RejectRole);
}

Tcpfilesender::~Tcpfilesender() {}
void Tcpfilesender::start(){}
void Tcpfilesender::startTransfer(){}
void Tcpfilesender::updateClientProgress(qint64 numBytes){}
void Tcpfilesender::openFile(){}
