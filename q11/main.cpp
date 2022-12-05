#include <iostream>

using namespace std;

class Student{
    
    int roll_number;
    char student_name[20]; // maximum 20 character
    char subject_name[3][20]; // array of 3 element
    float max_marks[3]; // 3 subject -3 marks
    float min_marks[3];
    float obtained_marks[3];
    
    public:
        // declare and define function
        void input_data(){
            cout << "Enter roll_number: " << endl;
            cin >> roll_number;
            cout << "Enter student name: " << endl;
            cin >> student_name;
            for(int i=0;i <3;i++){
                cout << "Enter subject " << i+1 << endl;
                cin >> subject_name[i];
                cout << "Enter subject max mark" << endl;
                cin >> max_marks[i];
                cout << "Enter subject min mark" << endl;
                cin >> min_marks[i];
                cout << "Enter subject objected mark" << endl;
                cin >> obtained_marks[i];
            }
        }

        void result(){
            cout << "Result of student " << student_name << " is: " << endl;
            float total_max;
            float total_obt;
            float percent;
            int i;
            for(i=0;i<3;i++){
                total_max = total_max + max_marks[i];
                total_obt = total_obt + obtained_marks[i];
            }
            percent = total_obt * 100/total_max;
            cout << "Total obtained marks out of " << total_max << " = " << total_obt << endl;
            cout << "Total percentage= " << percent << "%" << endl;

            if(percent>=70){
                cout << "First division!" << endl;
            }
            else if( (percent < 70) && (percent >=50) ){
                cout << "Second division" << endl;
            }
            else if( (percent > 33) && (percent < 50) ){
                cout << "Third division" << endl;
            }
            else{
                cout << "Fail" << endl;
            }
        }
};

int main(){

    Student student1;

    student1.input_data();

    student1.result();

    return 0;
}
