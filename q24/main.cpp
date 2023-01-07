#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class ArraySort{
    public:
        static void sort_array(float f[5]);
        static void sort_array(int f[5]); // static member function overloading
        static void swap(float& a, float& b);
        static void swap(int& a,int& b);
};

void ArraySort::sort_array(float f[5]){  //static member function definition
    int i;
    int j;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1;j++){
            if(f[j]>f[j+1]){
                swap(f[j],f[j+1]); // nesting static member function
            }
        }
    }
    cout << "sorted float array is: " <<endl;
    for(i=0;i<5;i++){
        cout <<f[i] << endl;
    }
}

void ArraySort::sort_array(int f[5]){ //static member function overloading
    int i;
    int j;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1;j++){
            if(f[j]>f[j+1]){
                swap(f[j],f[j+1]); //nesting static member function
            }
        }
    }
    cout << "sorted integer array is: " <<endl;
    for(i=0;i<5;i++){
        cout <<f[i] << endl;
    }
}

void ArraySort::swap(float &a,float &b){ // overloading swap function for float parameter
    float temp = a;
    a = b;
    b = temp;
}

void ArraySort::swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    ArraySort a1;
    float fary[5]; //floating number array
    int ary[5]; //integer number array
    cout << "Enter float array: ";
    // enter your floating array
    int i;
    for(i=0;i<5;i++){
        cin >> fary[i];
    }
    a1.sort_array(fary);

    cout << "Enter integer array: ";
    // enter your integer array
    for(i=0;i<5;i++){
        cin>>ary[i];
    }
    a1.sort_array(ary); //static member function calling and passing int array
    getch();
    return 0;
}


