#include <iostream>
#include <conio.h>

using namespace std;

class Student{
    public:
        Student(){}; // Default constructor
        ~Student(){}; // Destructor declared
        int rollNumber;
        string nameStudent;
        string nameSubjects[3];
        float maxMarks[3];
        float minMarks[3];
        float obtainedMarks[3];

        void inputData(){
            cout << "Roll no: " << endl;
            cin >> rollNumber;
            cout << "Name of Student  " << endl;
            cin >> nameStudent;
            // enter suject name, max, min, obtained score
            for(int i=0; i <3;i++){
                cout << "Subject Name " << i+ 1 << endl;
                cin >> nameSubjects[i];
                cout << "Maximum score " << endl;
                cin >> maxMarks[i];
                cout << "Minimum score " << endl;
                cin >> minMarks[i];
                cout << "Obtained score" << endl;
                cin >> obtainedMarks[i];
            }// end of for
        } // end of function

        void displayResult(){
            float totalMax;
            float totalObtained;
            float percent;
            cout << "Result of student " << nameStudent  << "......" << endl;
            // calculate total mark and total obtained mark
            for(int i=0;i<3;i++){
                totalMax += maxMarks[i];
                totalObtained += obtainedMarks[i];
            } // end of for
            // calucate percent
            percent = totalObtained*100/totalMax;
            cout << "Total obtained marks in " << totalMax << " is = " << totalObtained << endl;
            cout << "Percentage is= " << percent << "%" << endl;
            if(percent>=70){
                cout << "First Division..." << endl;
            }
            else if((percent <70) && (percent >=50)){
                cout << "Second Division..." << endl;
            }
            else if((percent <50) && (percent >=33)){
                cout << "Third Division..." << endl;
            }
            else{
                cout << "Failed the test!" << endl;
            } // end of if
        }// end of function

        void displaySpec(int roll){
            if (roll == rollNumber){
                displayResult(); // nesting function definition
            }// end of function
        }

}; // end if Student class
int main(){

    // Student student1;
    // student1.inputData();
    // student1.displayResult();

    Student students[3];
    for(int i=0;i<3;i++){
        cout << "Enter details of the student " << i+1 << " : " << endl;
        students[i].inputData();// input data of each member
    } // end of for

    int roll_no;
    // display specific student number
    cout << "Enter your Student roll number" << endl;
    cin >> roll_no;
    for(int i=0;i<=3;i++){
        students[i].displaySpec(roll_no); // print out if student rollNumber match roll_no
    } // end of for
    getch();
    return 0;
} // end of main block