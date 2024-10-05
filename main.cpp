#include <iostream>
#include <string>
#include <fstream>
#include "Admin.h"
#include "Employee.h"
#include "Client.h"
#include "FileHelper.h"
using namespace std;

int main()
{
  Admin a("ahmed", "ahmed123", 6000);
  FileHelper::saveAdmin(a);
  return 0;
}