#ifndef LECTUREADD_H
#define LECTUREADD_H

#include "QDialog"
#include "ui_LectureAdd.h"

class LectureAdd : public QDialog, public Ui::LectureAdd {
				Q_OBJECT

public:
				LectureAdd(QWidget *parent = 0);
				bool completeEnable;

private slots:
				void clickOK();
				void checkedComplete(int);

signals:
				void confirmData(const QString &, const qint32 &, const bool *, const double &);

};

#endif
