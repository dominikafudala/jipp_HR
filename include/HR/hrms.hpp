#ifndef HRMS_HPP
#define HRMS_HPP

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <HR/employee.hpp>

using namespace std;

class HRMS{
    public:
        void add(Employee employee,string departmentId, double salary); // meotda dodajaca uzytkownika do systemu, danego departamentu, mającego dane wynagrodzenie
        void printDepartment(string departmentId)noexcept(false); // wszyscy pracownicy danego departmaentu
        void changeSalary(string employeeId, double salary)noexcept(false); // metoda zmeiniająca wynagrodzenia danego pracownika
        void printSalaries(); //metoda wypiusjaca wynagrodzenia
        void printSalariesSorted(); // metoda wypisująca posortowane wynagrodzenie
    private:
        map<string, Employee> employees; // kontener pracownicy
        map<string, vector<string>> departments; //kontener deaprtament - wszystkie identyfikatory
        map<string, double> salaries; //kontener na wynagrodzenia
};

#endif