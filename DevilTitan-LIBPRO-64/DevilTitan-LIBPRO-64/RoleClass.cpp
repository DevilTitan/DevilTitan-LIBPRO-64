#include "RoleClass.h"

void User::getFullName(string first, string last) {
	first = this->fullName.firstName;
	last = this->fullName.lastName;
}
void User::getDateOfBirth(unsigned day, unsigned month, unsigned year) {
	day = this->dateOfBirth.day;
	month = this->dateOfBirth.month;
	year = this->dateOfBirth.year;
}
bool User::getGender() { return gender; }
string User::getPhoneNumber() { return phoneNumber; }
string User::getEmail() { return email;	}
string User::getOccupation() { return occupation; }
string User::getCompany_school() { return company_school; }
string User::getAddress() { return address; }

string Account::getSignInName() { return signInName; };
void Account::changeSignInName(string &newSignInName) { this->signInName = newSignInName; }
string Account::getPassword() { return password; }
void Account::changePassword(string &newPassword) { this->password = newPassword; }