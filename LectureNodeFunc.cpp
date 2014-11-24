#include "JolUpMain.h"
#include "LectureNodeFunc.h"
#include "LectureManager.h"
#include "LectureData.h"

#include "QDebug"

void LectureNodeFunc::inputData(LectureData *node, const QString &str, const qint32 &num, const bool *bol, const double &doub) {
				node->setName(str);
				node->setPoint(num);
				node->setMajor(bol[0]);
				node->setNormal(bol[1]);
				node->setNeed(bol[2]);
				node->setComplete(bol[3]);
				qDebug("4\n");
				if(node->isComplete()) {
								node->setGrade(doub);
				}
				else	node->setGrade(-1);
}

void LectureNodeFunc::addNode(LectureManager *manager, const QString &str, const qint32 &num, const bool *bol, const double &doub) {
				qDebug("3\n");
				LectureData *newNode = new LectureData();
				LectureData *now = manager->getHead();
				inputData(newNode, str, num, bol, doub);

				//input data
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

void LectureNodeFunc::selectAllNode(LectureManager *manager, JolUpMain *parent) {
				if(!manager->getHead())	return;
				int major = 0, normal = 0;
				LectureData *now = manager->getHead();
				while(now) {
								if(now->isMajor()) {
												major = major + now->getPoint();
								}
								else {	//now-isNormal() == true
												normal = normal + now->getPoint();
								}
								now = now->getNext();
				}
				parent->refreshLectureInfo(major, normal);
}







