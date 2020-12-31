#include <iostream>
#include <HR/hrms.hpp>
#include <HR/employee.hpp>

using namespace std;

int main() {
string departamenty[3] = {"Departament 1", "Departament 2", "Departament 3"};
Employee pracownicy[10] = {
{"1", "Imie 1", "Nazwisko 1", "Stanowisko 1"},
{"2", "Imie 2", "Nazwisko 2", "Stanowisko 2"},
{"3", "Imie 3", "Nazwisko 3", "Stanowisko 3"},
{"4", "Imie 4", "Nazwisko 4", "Stanowisko 4"},
{"5", "Imie 5", "Nazwisko 5", "Stanowisko 5"},
{"6", "Imie 6", "Nazwisko 6", "Stanowisko 6"},
{"7", "Imie 7", "Nazwisko 7", "Stanowisko 7"},
{"8", "Imie 8", "Nazwisko 8", "Stanowisko 8"},
{"9", "Imie 9", "Nazwisko 9", "Stanowisko 9"},
{"10", "Imie 10", "Nazwisko 10", "Stanowisko 10"},
};

HRMS system;
system.add(pracownicy[0], departamenty[1], 56);
system.add(pracownicy[1], departamenty[1], 656);
system.add(pracownicy[2], departamenty[0], 66);
system.add(pracownicy[3], departamenty[2], 456);
system.add(pracownicy[4], departamenty[1], 6456);
system.add(pracownicy[5], departamenty[0], 6646);
system.add(pracownicy[6], departamenty[1], 6656);
system.add(pracownicy[7], departamenty[2], 456);
system.add(pracownicy[9], departamenty[1], 666);
system.add(pracownicy[8], departamenty[2], 60456);

system.printDepartment(departamenty[0]);
system.printDepartment(departamenty[1]);
system.printDepartment(departamenty[2]);

system.printSalaries();
system.changeSalary(pracownicy[2].getID(), 1111);
system.changeSalary(pracownicy[9].getID(), 111);
system.changeSalary(pracownicy[8].getID(), 11111);
system.printSalaries();

system.printSalariesSorted();

return 0;
}