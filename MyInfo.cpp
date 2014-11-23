#include "QtGui"
#include "MyInfo.h"

MyInfo::MyInfo(QWidget *parent) : QDialog(parent) {
//				label_Name->setText(myinfo->getName());
//				label_Major->setText(myinfo->getMajor());
				setupUi(this);
				connect(buttonBox, SIGNAL(accepted()), this, SLOT(clickOK()));
}

void MyInfo::clickOK() {
				QString str[2];
				qint32 arr[2];
				str[0] = lineEdit_NameData->text();
				str[1] = lineEdit_MajorData->text();
				emit confirmData(str);
				str[0] = spinBox_NeedMajorPointData->text();
				str[1] = spinBox_NeedNormalPointData->text();
				arr[0] = str[0].toInt();
				arr[1] = str[1].toInt();
				emit confirmData(arr);
}
