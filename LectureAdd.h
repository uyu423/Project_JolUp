#ifndef LECTUREADD_H
#define LECTUREADD_H

#include "QDialog"
#include "ui_LectureAdd.h"

class LectureAdd : public QDialog, public Ui::LectureAdd {
				Q_OBJECT

public:
				LectureAdd(QWidget *parent = 0);

};

#endif
