#ifndef MYINFO_H
#define MYINFO_H

#include "QDialog"
#include "ui_MyInfo.h"

class MyInfo : public QDialog, public Ui::MyInfo {
				Q_OBJECT

public:
				MyInfo(QWidget *parent = 0);

private slots:
				void clickOK();

signals:
				void confirmData(const QString *);
				void confirmData(const qint32 *);
};

#endif

