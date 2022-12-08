#include <iostream>

using namespace std;

class Array{
    public:
        Array(int b[5]){
            int i;
            for(i=0;i<5;i++){
                a[i]=b[i]; // parmeterized constructor
            }
        }; // end of constructor

        ~Array(){}; // destructor

        int a[5]; //data member

        void sort();

        void swap(int &,int &);
}; // end of class

void Array::swap(int &a,int &b) // member function definition
{
    int temp = a;
    a=b;
    b=temp; // this swap function will effect to variable because reference deckaration
} // end of function

void Array::sort(){
    int i;
    int j;
    int size = sizeof(a)/sizeof(int);
    cout << "length of array: " << size << endl;
    // we can access the variable a in here
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]); // swapping the values
            } // end of if
        } // end of for
    } // end of for
    cout << "Array in Ascanding oerder: " << endl;
    for(i=0;i<5;i++){
        cout << a[i] << endl;
    } // end of for
} // end of function

int main(){

    int ary[5];
    int i;

    cout << "Enter 5 integers: ";
    for(i=0;i<5;i++){
        cin >> ary[i];
    }
    Array ary1(ary); // creating an object also ary's values passing
    ary1.sort();
    return 0;
} // end of main