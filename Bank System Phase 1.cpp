// Bank System Phase 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <exception>
#include "person.h"
using namespace std;


class NotEnoughException :public exception {
	const char* what() const throw() {
		return "Not enough Balance to complete the transaction";
	}
};

class Client : public Person {
private:
	//Attribute
	double balance;
public:
	//Cons
	Client() {
		balance = 1500;
	}
	Client(string n, int i, string p, double b) : Person(n, i, p) {
		balance = b;
	}
	//Setter
	void setBalance(double b) {
		if (b >= 1500) {
			balance = b;
		}
		else {
			throw NotEnoughException();
		}
	}
	//Getter
	double getBalance() {
		return balance;
	}
	//Methods
	void deposit(double amount) {
		balance += amount;
	}
	void withdraw(double amount) {
		if (balance >= amount) {
			balance -= amount;
		}
		else {
			throw NotEnoughException();
		}
	}
	void transferTo(double amount, Client& recipient) {
		if (balance >= amount) {
			recipient.deposit(amount);
			balance -= amount;
		}
		else {
			throw NotEnoughException();
		}
	}
	void checkBalance() {
		cout << "Your current Balance = " << balance << endl;
	}
	void display() {
		Person::Display();
		cout << "Client Balance = " << balance << endl;
	}
};

class Employee :public Person {
protected:
	double salary;
public:
	Employee() {
		salary = 0;
	}
	Employee(string n, int i, string p, double s) : Person(n, i, p) {
		salary = s;
	}
	//setters
	void set_salary(double s) {
		if (salary >= 1500)
		{
			salary = s;
		}
		else
		{
			cout << "Error, enter salary again\n";
		}
	}

	//getters
	double get_salary() {
		return salary;
	}
	void display() {
		cout << "Employee Details\n";
		Person::Display();
		cout << "Salary :" << salary << "\n";
	}

};
class Admin : public Employee
{

public:
	Admin()
	{
		salary = 0;
	}

	Admin(string n, int i, string p, double s) :Employee(n, i, p, s) {
		salary = s;
	}

	void display() {

		cout << "Admin Details \n";
		Employee::Display();
		cout << "Salary :" << salary << "\n";
	}
};

