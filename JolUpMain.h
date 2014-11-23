#ifndef JOLUPMAIN_H
#define JOLUPMAIN_H

#include "QMainWindow"
#include "ui_JolUpMain.h"

//Dialog Class
class MyInfo;
class LectureAdd;
class LectureModify;
class LectureManager;

//Data Class
class MyInfoData;

//BO Class
class LectureNodeFunc;

class JolUpMain : public QMainWindow, public Ui::JolUpMain {
				Q_OBJECT

public:
				JolUpMain();
				void showMyInfoLabel();
				void showTotalPointLabel();
				void refeshLectureInfo();

private slots:
				//make dialog slots
				void showAbout();
				void showLectureAddDialog();
				void showLectureModifyDialog();

				void showMyInfoDialog();
				void updateMyInfo(const QString *);
				void updateTotalPoint(const qint32 *);
				void addLectureNode(const QString &, const qint32 &, const bool *, const double &);

private:
				//Dialog Class Create
				MyInfo *myinfo_d;
				LectureAdd *lectureadd_d;
				LectureModify *lecturemodify_d;

				//Data Class Create
				MyInfoData *myinfo;
				LectureManager *manager;

				void createActions();
				void createButtons();
};

#endif


