#include <iostream>
#include <conio.h>
using namespace std;

// class definition
class Employee{
    // data members
    int emp_id;
    float salary;
    // public area
    public:
        void get_emp_data(); // member function declaration
        void disp_emp_data(); // member function declaration
};

void Employee::get_emp_data(){
    cout << "Enter employee details: " << endl;
    cout << "Employee id= ";
    cin >> emp_id;
    cout << "Employee salary= ";
    cin >> salary;
}

void Employee::disp_emp_data(){
    cout << "Detail of employee is: " << endl;
    cout << "Employee ID= " << emp_id << " and Salary= " << salary << endl;
}

int main(){

    Employee emp1; // object emp1 created of employee class
    cout << "Accessing through object: " << endl;
    emp1.get_emp_data(); // data enterd with the help of object emp1

    Employee *emp_ptr; // creating pointer emp_ptr of type employee
    emp_ptr = &emp1; //emp_ptr holds address of object emp1, emp_ptr is pointer to object(emp1)
    emp_ptr->disp_emp_data(); //Displaying data stored in employee class via emp_ptr (pointer to an object)

    getch();
    return 0;
}