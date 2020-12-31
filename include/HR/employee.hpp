#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        Employee(string _id, string _name, string _surname, string _position);
        void set_departmentID(string _departmentID);
        string getID();
        void printEmployee();
    private:
        string id; //identyfikator pracownika
        string name;
        string surname;
        string departmentID=""; //identyfikator dzialu w ktorym pracuje dana osoba
        string position; //stanowisko na ktorym pracuje dana osoba
};

#endif