//Qt Include 
#include "QtGui"

//UI Include 
#include "JolUpMain.h"
#include "LectureAdd.h"
#include "LectureModify.h"
#include "MyInfo.h"

//Data Include
#include "MyInfoData.h"
#include "LectureManager.h"
#include "LectureData.h"

//BO Include
#include "LectureNodeFunc.h"


JolUpMain::JolUpMain() : QMainWindow() {
				setupUi(this);

				myinfo = new MyInfoData(NULL, NULL);
				manager = new LectureManager();
				showMyInfoLabel();
				createActions();
				createButtons();
}

void JolUpMain::createActions() {
				//About JolUp Menu Action
				actionAbout->setStatusTip(QApplication::translate("JolUpMain", "JolUp의 정보를 표시합니다.", 0, QApplication::UnicodeUTF8));
				connect(actionAbout, SIGNAL(triggered()), this, SLOT(showAbout()));
			
				//About Qt Menu Action
				actionAbout_Qt->setStatusTip(QApplication::translate("JolUpMain", "Qt Framework의 정보를 표시합니다.", 0, QApplication::UnicodeUTF8));
				connect(actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

				//Exit Menu Action
				actionExit->setStatusTip(QApplication::translate("JolUpMain", "JolUp을 종료합니다", 0, QApplication::UnicodeUTF8));
				connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));

				//New Menu Action
				//Load Menu Action
				//Save Menu Action
				//SaveAs Menu Action
}


void JolUpMain::createButtons() {
				//MyInfo Button Trigger
				pushButton_MyInfo->setStatusTip(QApplication::translate("JolUpMain", "내 정보와 졸업 요건을 수정합니다.", 0, QApplication::UnicodeUTF8));
				connect(pushButton_MyInfo, SIGNAL(clicked()), this, SLOT(showMyInfoDialog()));

				//LectureAdd Button Trigger
				pushButton_LectureAdd->setStatusTip(QApplication::translate("JolUpMain", "강의를 추가합니다.", 0, QApplication::UnicodeUTF8));
				connect(pushButton_LectureAdd, SIGNAL(clicked()), this, SLOT(showLectureAddDialog()));

				//LectureModify Button Trigger
				pushButton_LectureModify->setStatusTip(QApplication::translate("JolUpMain", "강의 정보를 수정합니다.", 0, QApplication::UnicodeUTF8));
				connect(pushButton_LectureModify, SIGNAL(clicked()), this, SLOT(showLectureModifyDialog()));

				//Exit Button Trigger
				pushButton_Exit->setStatusTip(QApplication::translate("JolUpMain", "JolUp을 종료합니다", 0, QApplication::UnicodeUTF8));
				connect(pushButton_Exit, SIGNAL(clicked()), this, SLOT(close()));
}

void JolUpMain::showAbout() {
				QMessageBox::about(this, tr("About JolUp"),
								tr("<h2>Project JolUp</h2>"
										"<p>JolUp is a small Application for University graduate. "
										"This Program used Qt Framework 4.8. & Protected by LGPL License. "
										"<p>Copyright &copy; 2014 YoWu<br/>"
										"<p>e-mail : <a href='mailto:uyu423@gmail.com'>uyu423@gmail.com</a><br/>"
										"blog : <a href='http://luckyyowu.tistory.com'>http://luckyyowu.tistory.com</a>"
										));
}


void JolUpMain::showMyInfoDialog() {
				myinfo_d = new MyInfo(this);
				myinfo_d->lineEdit_NameData->setText(myinfo->getName());
				myinfo_d->lineEdit_MajorData->setText(myinfo->getMajor());
				myinfo_d->spinBox_NeedMajorPointData->setValue(manager->getTotalMajorPoint());
				myinfo_d->spinBox_NeedNormalPointData->setValue(manager->getTotalNormalPoint());
				connect(myinfo_d, SIGNAL(confirmData(const QString *)), this, SLOT(updateMyInfo(const QString *)));
				connect(myinfo_d, SIGNAL(confirmData(const qint32 *)), this, SLOT(updateTotalPoint(const qint32 *)));
				myinfo_d->exec();
}

void JolUpMain::updateMyInfo(const QString *data) {
				myinfo->setName(data[0]);
				myinfo->setMajor(data[1]);
				this->showMyInfoLabel();
}

void JolUpMain::updateTotalPoint(const qint32 *data) {
				manager->setTotalMajorPoint((qint32)data[0]);
				manager->setTotalNormalPoint((qint32)data[1]);
				this->showTotalPointLabel();
}

void JolUpMain::showLectureAddDialog() {
				lectureadd_d = new LectureAdd(this);
				qDebug("2\n");
				connect(lectureadd_d, SIGNAL(confirmData(const QString &, const qint32 &, const bool *, const double &)), 
								this, SLOT(addLectureNode(const QString &, const qint32 &, const bool *, const double &)));
				lectureadd_d->exec();
}

void JolUpMain::addLectureNode(const QString &str, const qint32 &num, const bool *bol, const double &doub) {
				qDebug("1\n");
				LectureNodeFunc::addNode(manager, str, num, bol, doub);
}

void JolUpMain::refeshLectureInfo() {

}

void JolUpMain::showLectureModifyDialog() {
				lecturemodify_d = new LectureModify(this);
				lecturemodify_d->exec();
}

void JolUpMain::showMyInfoLabel() {
				label_NameData->setText(myinfo->getName());
				label_MajorData->setText(myinfo->getMajor());
				label_NameData->show();
				label_MajorData->show();
}

void JolUpMain::showTotalPointLabel() {
				label_NeedMajorPointData->setText(QString::number(manager->getTotalMajorPoint()));
				label_NeedNormalPointData->setText(QString::number(manager->getTotalNormalPoint()));
				label_NeedTotalPointData->setText(QString::number(manager->getTotalMajorPoint() + manager->getTotalNormalPoint()));
				label_NeedMajorPointData->show();
				label_NeedNormalPointData->show();
				label_NeedTotalPointData->show();
}

