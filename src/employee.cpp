#include <HR/employee.hpp>

Employee::Employee(string _id, string _name, string _surname, string _position)
{
    id=_id;
    name=_name;
    surname=_surname;
    position=_position;
}

void Employee::set_departmentID(string _departmentID){
    departmentID = _departmentID;
}

string Employee::getID()
{
    return id;
}

void Employee::printEmployee(){
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<" Surname: "<<surname<<endl;
    cout<<"Position: "<<position<<endl;
    cout<<"Department: "<<departmentID<<endl;
}
