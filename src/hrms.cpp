#include <HR/hrms.hpp>
#include <algorithm>

/*exceptions*/
class NotFound : public exception
{
    virtual const char *what() const throw()
    {
        return "Not found";
    }
};

/*end of exceptions*/

 void HRMS::add(Employee employee, string departmentId, double salary){
    employee.set_departmentID(departmentId); //ustawienie departamentu pracownika
    string empID = employee.getID();

    employees.insert(make_pair(empID,employee)); //dodanie pracownika do kontenera, mapowanie id i obiektu Employee

    departments[departmentId].push_back(empID); // mapowanie pomiedzy id departamentu a id pracownika
    salaries[empID]=salary; //mapowanie pomiedzy ID pracownika a jego wynagordzeniem 
 }

 void HRMS::printDepartment(string departmentId)noexcept(false){
     cout<<"-------------Department: "<<departmentId<<"--------------"<<endl;
     map<string, vector<string>>::iterator it;
     it = departments.find(departmentId);

     if(it!=departments.end()){ 
        vector<string> departmentFound = departments[departmentId];
        for(string id : departmentFound){
            Employee employee = employees.find(id)->second;
            employee.printEmployee();
        }  
     }else{//jeśli nie znaleziono departamentu
        NotFound not_found;
        try
        {
            throw not_found;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
     }

 }

 void HRMS::changeSalary(string employeeId, double salary)noexcept(false){
     map<string, double>::iterator it;
     it = salaries.find(employeeId);
     
     if(it!=salaries.end()){ 
        salaries[employeeId] = salary;
     }else{//jeśli nie znaleziono w salaries
        NotFound not_found;
        try
        {
            throw not_found;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
     }

 }

 void HRMS::printSalaries(){
     cout<<"-------Printing salaries--------"<<endl;
     for(auto i : employees){
     Employee info = i.second;
     info.printEmployee();
     cout<<"Salary: "<<salaries[info.getID()]<<endl;
     }
 }

 void HRMS:: printSalariesSorted(){
    vector<pair<string, Employee>> sal_vector;
    for(auto i : employees) sal_vector.push_back(i); //konwersja mapy na wektor

    sort(sal_vector.begin(), sal_vector.end(), [=](auto &begin, auto &end){return salaries[begin.first]>salaries[end.first];} ); // sortowanie według salaries

    cout<<"---------------Printing sorted salaries---------------------"<<endl;
    for(auto printSort : sal_vector){
         cout<<"Salary: "<<salaries[printSort.first]<<endl;
         printSort.second.printEmployee();
         cout<<endl;
     }
 }