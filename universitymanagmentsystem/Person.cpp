#include<bits/stdc++.h>
#include "Person.h"
using namespace std;
Person::Person() {
	cout << "Class Person Called" << endl;
}
Person::Person(string name, int age, char gender, string email, string phoneNumber) :name(name), age(age), gender(gender), email(email), phoneNumber(phoneNumber){}
void Person::setName(string name) {
	this->name = name;
}
string Person::getName() {
	return this->name;
}
void Person::setEmail(string email) {
	this->email = email;
}
string Person::getEmail() {
	return this->email;
}
void Person::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}
string Person::getPhoneNumber() {
	return this->phoneNumber;
}
void Person::setAge(int age) {
	this->age = age;
}
int Person::getAge() {
	return this->age;
}
void Person::setGender(char gender) {
	this->gender = gender;
}
char Person::getGender() {
	return this->gender;
}
Person::~Person() {
	cout << "Destructor for Person called" << endl;
}