#ifndef ROLECLASS_H
#define ROLECLASS_H

#include <string>
#include <vector>

#include "bookData.h"

using namespace std;

struct Name {
	string firstName, lastName;
};
class Reader {
public:
	void addBook(Rbook &newBook);
	void removeBook(Rbook &deleteBook);
	int getNoOfInfringement();
	bool getIsBanned();
private:
	vector<Rbook> borrowingBook;
	int NoOfInfringement;
	bool isBanned;

};

class Librarian {
public:
	bool bookChecking();
	bool readerChecking();
	void sendRequest();
private:
	vector<book> bookOnUpdate;
	vector<Reader> readerInQueue;
};

class readerManager {
private:
	vector<Reader> listOfReader;
	vector<bool> isBannedReader;

};

class DataProcessingTechnician {
private:
	vector<book> newRequest;
};

class Administrator : public Reader, public Librarian, public readerManager, public DataProcessingTechnician {

};
class Account {
public:
	Account(string signUpName, string createdPass) : signInName(signUpName), password(createdPass) {};
	string getSignInName();
	void changeSignInName(string &newSignInName);
	string getPassword();
	void changePassword(string &newPassword);
	bool isReader, isLibrarian, isStudentManager, isDataProcessingTechnician, isAdministrator;
private:
	string signInName;
	string password;
	Reader reader;
	Librarian librarian;
	readerManager studentmanager;
	DataProcessingTechnician dataProcessingTechnician;
	Administrator administrator;
};

class User {
public:
	void getFullName(string first, string last);
	bool getGender();
	void getDateOfBirth(unsigned day, unsigned month, unsigned year);
	string getPhoneNumber();
	string getEmail();
	string getOccupation();
	string getCompany_school();
	string getAddress();
private:
	Name fullName;
	bool gender;
	Date dateOfBirth;
	string phoneNumber;
	string email;
	string ID;
	string occupation;
	string company_school;
	string address;
	vector<Account> ListOfAccount;
};
#endif
