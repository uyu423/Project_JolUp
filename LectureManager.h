#ifndef LECTUREMANGER_H
#define LECTUREMANGER_H

#include "QString"

class LectureData;

class LectureManager {
private:
			qint32 totalNormalPoint;
			qint32 totalMajorPoint;
			qint32 count;
			LectureData *head;

public:
			LectureManager() {
							totalNormalPoint = 0;
							totalMajorPoint = 0;
							count = 0;
							head = NULL;
			}

			void setTotalNormalPoint(qint32 totalNormalPoint) { this->totalNormalPoint = totalNormalPoint; }
			qint32 getTotalNormalPoint() const { return totalNormalPoint; }

			void setTotalMajorPoint(qint32 totalMajorPoint) { this->totalMajorPoint = totalMajorPoint; }
			qint32 getTotalMajorPoint() const { return totalMajorPoint; }

			void setCount(qint32 count) { this->count = count; }
			qint32 getCount() const { return count; }

			void setHead(LectureData *head) { this->head = head; }
			LectureData *getHead() const { return head; }
};

#endif
