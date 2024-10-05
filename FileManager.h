#pragma once
#include "DataSourceInterface.h"
#include "FileHelper.h"

class FileManager : public DataSourceInterface
{
public:
  static void addClient(Client c)
  {
    FileHelper::saveClient(c);
  }

  static void addEmployee(Employee e)
  {
    FileHelper::saveEmployee(e);
  }

  static void addAdmin(Admin a)
  {
    FileHelper::saveAdmin(a);
  }

  static void getAllClients() {
    FileHelper::getAllClients();
  }

  static void getAllEmployees() {
    FileHelper::getAllEmployees();
  }

  static void getAllAdmins() {
    FileHelper::getAllAdmins();
  }

  static void getData() {
    getAllClients();
    getAllEmployees();
    getAllAdmins();
  }
  
};