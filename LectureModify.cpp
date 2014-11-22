#include "QtGui"
#include "LectureModify.h"

LectureModify::LectureModify(QWidget *parent) : QDialog(parent) {
				setupUi(this);
				createButton();

}

void LectureModify::createButton() {
				//Modify Button Trigger

				//Delete Button Trigger

				//Close Button Trigger
				connect(pushButton_Close, SIGNAL(clicked()), this, SLOT(close()));
				
}
