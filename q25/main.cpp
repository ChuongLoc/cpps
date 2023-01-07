#include <iostream>
using namespace std;
class counter{
    static int count_obj;
    public:
        // default constructor
        counter(){
            cout <<"...Object created"<<endl;
            inc_count(); // nested static member function calling
        }
        ~counter(){
            cout<<"Object destroyed..."<<endl;
            dec_count(); //nested static member function calling
        }
        static void inc_count(){
            count_obj++;
            cout << "Value of count is: " << count_obj << endl;
        }

        static void dec_count(){
            count_obj--;
            cout<<"Value of count is: " << count_obj << endl;
        }

        static void cur_count(){
            cout << "Current value of count is: " << count_obj << endl; // static function definition
        }
};

int counter::count_obj; // this int number link to each counter class object

int main(){
    counter c1; // object c1 created and constructor invoked (count==1)
    {
        cout << "Block start---" << endl;
        counter c2;
        //object c2 created and constructor invoked (count==2)
        counter::cur_count(); // current value (count=2)
        //calling static member function
        cout<< "---Block end" << endl;
    }
    counter c3;
    // object c3 created and constructor invoked(count=2)
    // object c3 destroyed an destructor invoked(count=1)
    // object c1 destroyed an destructor invoked(count=0)
    return 0;
}