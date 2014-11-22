#ifndef JOLUPMAIN_H
#define JOLUPMAIN_H

#include "QMainWindow"
#include "ui_JolUpMain.h"

//Dialog Class
class MyInfo;
class LectureAdd;
class LectureModify;

//Data Class
class MyInfoData;

class JolUpMain : public QMainWindow, public Ui::JolUpMain {
				Q_OBJECT

public:
				JolUpMain();
				void showMyInfoLabel();
				static void editMyInfo();

private slots:
				//make dialog slots
				void showAbout();
				void showLectureAddDialog();
				void showLectureModifyDialog();

				void showMyInfoDialog();
				void updateMyInfo(const QString *data);

private:
				//Dialog Class Create
				MyInfo *myinfo_d;
				LectureAdd *lectureadd_d;
				LectureModify *lecturemodify_d;

				//Data Class Create
				MyInfoData *myinfo;
				//LectureManager manager;

				void createActions();
				void createButtons();
};

#endif


