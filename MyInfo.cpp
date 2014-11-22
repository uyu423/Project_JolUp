#include "QtGui"
#include "MyInfo.h"

MyInfo::MyInfo(QWidget *parent) : QDialog(parent) {
//				label_Name->setText(myinfo->getName());
//				label_Major->setText(myinfo->getMajor());
				setupUi(this);
				connect(buttonBox, SIGNAL(accepted()), this, SLOT(clickOK()));
}

void MyInfo::clickOK() {
				QString Data[2];
				Data[0] = lineEdit_NameData->text();
				Data[1] = lineEdit_MajorData->text();
				emit confirmData(Data);
}
