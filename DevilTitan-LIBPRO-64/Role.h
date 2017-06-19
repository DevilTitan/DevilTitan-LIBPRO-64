#pragma once

#include <QObject>

class Role : public QObject
{
	Q_OBJECT

public:
	Role(QObject *parent);
	~Role();
};
