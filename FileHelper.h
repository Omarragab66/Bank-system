#pragma once
#include <fstream>
#include "Client.h"
#include "Admin.h"
#include "Employee.h"
#include "Parser.h"

using namespace std;

class FileHelper
{

public:
  static void saveClient(Client c)
  {
    fstream file("D:\\prgramming\\BankSystem\\Phase 1\\client.txt", ios::app);
    file << c.getName() << '&' << c.getPassword() << '&' << c.getBalance() << endl;
    file.close();
  }

  static void saveEmployee(Employee e)
  {
    fstream file("D:\\prgramming\\BankSystem\\Phase 1\\employee.txt", ios::app);
    file << e.getName() << '&' << e.getPassword() << '&' << e.getSalary() << endl;
    file.close();
  }

  static void saveAdmin(Admin a)
  {
    fstream file("D:\\prgramming\\BankSystem\\Phase 1\\admin.txt", ios::app);
    file << a.getName() << '&' << a.getPassword() << '&' << a.getSalary() << endl;
    file.close();
  }

  static void getAllClients()
  {
    fstream file("D:\\prgramming\\BankSystem\\Phase 1\\client.txt", ios::in);
    string line;
    while (getline(file, line))
    {
      Client c = Parser::parseToClient(line);
      allClients.push_back(c);
    }
    file.close();
  }

  static void getAllEmployees()
  {
    fstream file("D:\\prgramming\\BankSystem\\Phase 1\\employee.txt", ios::in);
    string line;
    while (getline(file, line))
    {
      Employee e = Parser::parseToEmployee(line);
      allEmployees.push_back(e);
    }
    file.close();
  }

  static void getAllAdmins()
  {
    fstream file("D:\\prgramming\\BankSystem\\Phase 1\\admin.txt", ios::in);
    string line;
    while (getline(file, line))
    {
      Admin a = Parser::parseToAdmin(line);
      allAdmins.push_back(a);
    }
    file.close();
  }

  static void clearFile(string fileName)
  {
    fstream file(fileName, ios::out | ios::trunc);
    file.close();
  }
};