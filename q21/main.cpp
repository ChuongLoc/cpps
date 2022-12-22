#include <iostream>
#include <conio.h>
using namespace std;

struct Student{
    string name;
    int rollno;
    string subjects[3];
    int marks[3];

    void input_data();

    void print_data();
};

void Student::input_data(){
    cout << "Enter student name: " << endl;
    cin >> name;
    cout << "Enter roll number: " << endl;
    cin >> rollno;
    int i;
    for(i=0;i<3;i++){
        cout << "Enter subject name " << i << endl;
        cin >> subjects[i];
        cout << "Enter subject mark " << i << endl;
        cin >> marks[i];
    }
}

void Student::print_data(){
    cout << "Student name: " << name << endl;
    cout << "Enter roll number: " << rollno << endl;
    int j;
    for(j =0;j<3;j++){
        cout << "Subject name " << subjects[j] << endl;
        cout << "Subject mark " << marks[j] << endl;
    }
}


int main(){

    Student student1;

    student1.input_data();

    student1.print_data();

    return 0;
}
