#ifndef MYINFODATA_H
#define MYINFODATA_H

#include "QString"

class MyInfoData {

private:
				QString name;
				QString major;
				
public:
				MyInfoData(QString name, QString major) {
								this->setName(name);
								this->setMajor(major);
				}
				const QString& getMajor() const { return major; }
				const QString& getName() const { return name; }
				void setMajor(const QString& major) { this->major = major; }
				void setName(const QString& name) {this->name = name; }
};

#endif

