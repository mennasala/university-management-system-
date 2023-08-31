#ifndef PERSON_H
#define PERSON_H

#include<bits/stdc++.h>
using namespace std;
class Person {
private:
	string name{}, email{}, phoneNumber{};
	int age{};
	char gender{};
public:
	Person();
	Person(string name, int age, char gender, string email, string phoneNumber);
	void setName(string name);
	string getName();
	void setEmail(string email);
	string getEmail();
	void setPhoneNumber(string phoneNumber);
	string getPhoneNumber();
	void setAge(int age);
	int getAge();
	void setGender(char gender);
	char getGender();
	virtual void getPersonInfo() = 0;
	~Person();
};

#endif