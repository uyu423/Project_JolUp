#ifndef LECTUREDATA_H
#define LECTUREDATA_H

#include "QString"

class LectureData {

private:
				qint32 idx;
				QString name;
				qint32 point;
				bool major;
				bool normal;
				bool need;
				bool complete;
				double grade;
				LectureData *next;

public:
				void setIdx(qint32 idx) { this->idx = idx; }
				qint32 getIdx() const { return idx; }

				void setName(QString name) { this->name = name; }
				QString getName() const { return name; }

				void setPoint(qint32 point) { this->point = point; }
				qint32 getPoint() const { return point; }

				void setMajor(bool major) { this->major = major; }
				bool isMajor() const { return major; }

				void setNormal(bool normal) { this->normal = normal; }
				bool isNormal() const { return normal; }

				void setNeed(bool need) { this->need = need; }
				bool isNeed() const { return need; }

				void setComplete(bool complete) { this->complete = complete; }
				bool isComplete() const { return complete; }

				void setGrade(double grade) {this->grade = grade; }
				double getGrade() const { return grade;}

				void setNext(LectureData *next) { this->next = next; };
				LectureData *getNext() const { return next; }
};


#endif
