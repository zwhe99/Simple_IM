#pragma once
#include <qobject.h>
/**
 * @brief 完成注册功能的类
 */

class Register :public QObject
{
	Q_OBJECT
public:
	Register();
	~Register();

	bool SignUp(QString username, QString password, QString naickname, QString email,QString profile_index) const;

public slots:
	void onSignUpSuccess();
	void onSignUpFail(QString info);

private:

signals:
	void SignUpSuccess();
	void SignUpFail(QString info);

};

