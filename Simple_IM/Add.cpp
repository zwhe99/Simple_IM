#include "Add.h"
#include "MsgType.h"
#include "Client.h"
#include "qjsonobject.h"
#include "qjsondocument.h"

Add::Add()
{
	connect(Client::getInstance(), SIGNAL(AddContactSuccess(QJsonObject)), this, SIGNAL(AddContactSuccess(QJsonObject)));
	connect(Client::getInstance(), SIGNAL(AddContactFail(QJsonObject)), this, SIGNAL(AddContactFail(QJsonObject)));
}


Add::~Add()
{
}

bool Add::AddContact(QString username,QString targetUsername) const
{
	//ʹ��JSON��ʽ����ע������
	QJsonObject msg_json;
	msg_json.insert("type", MsgType::addContact);
	msg_json.insert("username", username);
	msg_json.insert("targetUsername", targetUsername);

	qDebug() << "Client AddContact:";
	qDebug() << msg_json.value("username");
	qDebug() << msg_json.value("targetUsername");

	//���ΪQJsonDocument��ʽ
	QJsonDocument msg(msg_json);

	//��ȡfacade
	Client* myClient = Client::getInstance();

	//��������
	if (myClient->SendMessageToServer(msg))
	{
		qDebug() << "Client AddContact:";
		qDebug() << "success to send AddContact msg";
		return true;
	}
	else
	{
		qDebug() << "Client AddContact:";
		qDebug() << "fail to send AddContact msg";
		return false;
	}
}