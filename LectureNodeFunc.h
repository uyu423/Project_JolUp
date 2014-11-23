#ifndef LECTURENODEFUNC_H
#define LECTURENODEFUNC_H

#include "QString"

class LectureManager;

class LectureNodeFunc {

public:
				static void addNode(LectureManager *, const QString &, const qint32 &, const bool *, const double &);
				static void delNode();
				static void modifyNode();
				static void selectAllNode();
};

#endif
