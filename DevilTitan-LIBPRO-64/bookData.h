#ifndef BOOKDATA_H
#define BOOKDATA_H

#include <string>
#include "global.h"

using namespace std;

struct Date {
	unsigned day, month, year;
};

class bookk {
public:
    string isbn;
	string bookName;
	string getPublisher();
	string getAuthor();
private:
	string publisher;
	string author;
};

class Rbook : public bookk {
private:
	Date dueDate;
	bool isOnTime;
};
#endif
