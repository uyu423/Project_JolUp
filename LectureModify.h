#ifndef LECTUREMODIFY_H
#define LECTUREMODIFY_H

#include "QDialog"
#include "ui_LectureModify.h"

class LectureModify : public QDialog, public Ui::LectureModify {
				Q_OBJECT
public:
				LectureModify(QWidget *parent = 0);

private:
				void createButton();
};

#endif
