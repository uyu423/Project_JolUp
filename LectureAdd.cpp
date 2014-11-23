#include "QtGui"
#include "LectureAdd.h"

LectureAdd::LectureAdd(QWidget *parent) : QDialog(parent) {
				QStringList str;
				str <<"A+"<< "A0"<< "B+"<< "B0"<< "C+"<< "C0"<< "D+"<< "D0"<< "F";
				completeEnable = 0;
				setupUi(this);
				comboBox_Grade->addItems(str);
				comboBox_Grade->show();
				connect(checkBox_Complete, SIGNAL(stateChanged(int)), this, SLOT(checkedComplete(int)));
				connect(buttonBox, SIGNAL(accepted()), this, SLOT(clickOK()));
}

void LectureAdd::checkedComplete(int check) {
			if(check == 0) {
							comboBox_Grade->setEnabled(false);
							completeEnable = 0;
			}
			else {
							comboBox_Grade->setEnabled(true);
							completeEnable = 1;
			}
			comboBox_Grade->show();
}


void LectureAdd::clickOK() {
				QString str;
				QString tmp[4];
				qint32 num;
				bool check[4];
				double doub;
				str = lineEdit_LectureNameData->text();
				tmp[0] = spinBox_PointData->text();
				num = tmp[0].toInt();
				check[0] = radioButton_Major->isChecked();
				check[1] = radioButton_Normal->isChecked();
				check[2] = checkBox_NeedJolUp->isChecked();;
				check[3] = checkBox_Complete->isChecked();
				tmp[0] = comboBox_Grade->currentText();
				if(completeEnable) {
								if(tmp[0] == "A+")	doub = 4.5;
								else if(tmp[0] == "A0")	doub = 4.0;
								else if(tmp[0] == "B+")	doub = 3.5;
								else if(tmp[0] == "B0") doub = 3.0;
								else if(tmp[0] == "C+") doub = 2.5;
								else if(tmp[0] == "C0") doub = 2.0;
								else if(tmp[0] == "D+") doub = 1.5;
								else if(tmp[0] == "D0") doub = 1.0;
								else	doub = 0;
				}
				else	doub = -1;
				qDebug() << *str.data();
				qDebug("%d %d %d %d %d %lf\n", num, check[0], check[1], check[2], check[3], doub);
				emit confirmData(str, num, check, doub);
}
