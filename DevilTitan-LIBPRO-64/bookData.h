#ifndef BOOKDATA_H
#define BOOKDATA_H

#include <string>

using namespace std;

struct Date {
	unsigned day, month, year;
};

class book {
public:
	string isbn;
	string bookName;
	string getPublisher();
	string getAuthor();
private:
	string publisher;
	string author;
};

class Rbook : public book {
private:
	Date dueDate;
	bool isOnTime;
};
#endif