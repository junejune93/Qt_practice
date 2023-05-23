#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H

/* kccistc embedded & iot by ksh */

#include <QTcpSocket>
#include <QHostAddress>
#include <QInputDialog>
#include <QMessageBox>

#define BLOCK_SIZE      1024
class SocketClient : public QWidget
{
	Q_OBJECT

private:
    QTcpSocket *pQTcpSocket;
    QString SERVERIP = "10.10.141.53";
    int SERVERPOT = 5000;
    QString LOGID = "HJ_QT";
    QString LOGPW = "PASSWD";
public:
	SocketClient(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~SocketClient();

signals:
    void sigSocketRecv(QString);

private slots: // class 내에서만 사용 가능
	void slotSocketReadData();
	void slotSocketError();
	void slotConnectServer();

public slots: // 다른 class에서 접근이 가능
    void slotConnectToServer(bool&);
    void slotClosedByServer();
    void slotSocketSendData(QString);
};

#endif // SOCKETCLIENT_H
