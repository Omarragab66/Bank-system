Features:
Client Module:

Clients can log in using their ID and password.
Perform banking operations such as:
Deposit money.
Withdraw money.
Check balance.
Transfer money to another client.
Employee Module:

Employees can log in using their ID and password.
Manage client operations:
Add new clients.
Search for clients by ID.
List all clients.
Edit client information.
View their own profile.
Admin Module:

Admins inherit all functionalities of employees.
Manage employee operations:
Add new employees.
Search for employees.
Edit employee information.
List all employees.
Key Implementation Details:
Inheritance Structure: A Person class is created to define common attributes (name, ID, password). Client, Employee, and Admin inherit from Person.
Validation: A Validation class provides static methods for validating names, passwords, balances, and salaries.
Data Persistence:
Data is stored in text files (Clients.txt, Employees.txt, Admins.txt).
A FileManager class implements a DataSourceInterface to handle file operations such as adding, retrieving, and clearing data.
Utility Classes:
Parser: Parses and converts text data to objects.
FilesHelper: Simplifies file management tasks.
Development Phases:
Phase 1: Core class development (Client, Employee, Admin).
Phase 2: Implementation of data persistence, file handling, and additional functionalities like searching, listing, and editing clients/employees.
Phase 3: Development of manager classes (ClientManager, EmployeeManager, AdminManager) and user interface (Screens) to create an interactive application.
