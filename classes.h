#include <iostream>
#include <string>
#include "validation.h"
using namespace std;
#pragma once


class Person
{
protected:
	string name;
	int id;
	string password;
public:
	Person() {
		name = " ";
		id = 0;
		password = " ";
	}
	Person(string name, int id, string password) {
		if (Validation::validName(name))
			this->name = name;
		else
			cout << "Invalid name, Please try again.\n";
		this->id = id;
		if (Validation::validPassword(password))
			this->password = password;
		else
			cout << "Invalid password, Please try again.\n";
	}
	/*void setName(string n) {
		name = n;
	}
	void setPass(string p) {
		password = p;
	}
	void setID(int i) {
		id = i;
	}*/

	void setName(string name)
	{
		if (Validation::validName(name))
			this->name = name;
		else
			cout << "Invalid name, Please try again.\n";
	}

	void setID(int id)
	{
		this->id = id;
	}

	void setPassword(string password)
	{
		if (Validation::validPassword(password))
			this->password = password;
		else
			cout << "Invalid password, Please try again.\n";
	}
	

	string getName() {
		return name;
	}
	string getPassword() {
		return password;
	}
	int getID() {
		return id;
	}
	void display() {
		cout << "Name : " << name << endl
			<< "ID : " << id << endl
			<< "Password : " << password << endl;
	}
};

class Admin : public Person
{
private:
	//Attrs
	double salary = 0.0;
public:
	//Cons
	Admin()
	{
		this->salary = 0.0;
	}

	Admin(string name, int id, string password, double salary) :Person(name, id, password)
	{
		if (Validation::validSalary(salary))
			this->salary = salary;
		else
			cout << "The minimum Salary is 5000, Please check it out again.\n";
	}

	//Setters
	/*void setName(string name)
	{
		if (Validation::validName(name))
			this->name = name;
		else
			cout << "Invalid name, Please try again.\n";
	}

	void setID(int id)
	{
		this->id = id;
	}

	void setPassword(string password)
	{
		if (Validation::validPassword(password))
			this->password = password;
		else
			cout << "Invalid password, Please try again.\n";
	}
	*/
	void setSalary(double salary)
	{
		if (Validation::validSalary(salary))
			this->salary = salary;
		else
			cout << "The minimum Salary is 5000, Please check it out again.\n";
	}

	// Getters

	string getName()
	{
		return name;
	}

	int getID()
	{
		return id;
	}

	string getPassword()
	{
		return password;
	}

	double getSalary()
	{
		return salary;
	}

	void display()
	{
		Person::display();
		cout << "Salary : " << salary << endl;
	}
};
