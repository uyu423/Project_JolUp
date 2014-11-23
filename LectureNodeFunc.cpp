#include "LectureNodeFunc.h"
#include "LectureManager.h"
#include "LectureData.h"

#include "QDebug"

void LectureNodeFunc::addNode(LectureManager *manager, const QString &str, const qint32 &num, const bool *bol, const double &doub) {
				qDebug("3\n");
				LectureData *newNode = new LectureData();
				LectureData *now = manager->getHead();

				//input data
				newNode->setName(str);
				newNode->setPoint(num);
				newNode->setMajor(bol[0]);
				newNode->setNormal(bol[1]);
				newNode->setNeed(bol[2]);
				newNode->setComplete(bol[3]);
				qDebug("4\n");
				if(newNode->isComplete()) {
								newNode->setGrade(doub);
				}
				else	newNode->setGrade(-1);
				qDebug() << *str.data();
				qDebug("%d %d %d %d %d %lf", newNode->getPoint(), newNode->isMajor(), newNode->isNormal(), newNode->isNeed(), newNode->isComplete(), newNode->getGrade());

				qDebug("5\n");
				if(!now) {
								manager->setHead(newNode);
				}
				else {
								while(now->getNext()) {
													now = now->getNext();
								}
								qDebug("6\n");
								now->setNext(newNode);
				}
				manager->setCount(manager->getCount()+1);
}

void LectureNodeFunc::delNode() {
}

void LectureNodeFunc::modifyNode() {
}

void LectureNodeFunc::selectAllNode() {
}
