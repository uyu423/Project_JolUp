#ifndef LECTURENODEFUNC_H
#define LECTURENODEFUNC_H

#include "QString"

class LectureManager;
class LectureData;

class LectureNodeFunc {

private:
				static void inputData(LectureData *, const QString &, const qint32 &, const bool *, const double &);

public:
				static void addNode(LectureManager *, const QString &, const qint32 &, const bool *, const double &);
				static void delNode();
				static void modifyNode();
				static void selectAllNode(LectureManager *, JolUpMain *);
};

#endif
