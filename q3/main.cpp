#include <iostream>

using namespace std;

// function declarations
void swap_int(int , int );
void swap_float(float , float );

int main(){
    int a; int b; float c; float d;

    cout << "swap 2 integer" << endl;
    cout << "Enter 2 integer number: ";
    cin >> a >> b;
    cout << "Before swapping number1= " << a << " and number2= " << b << endl;
    swap_int(a,b);
    cout << "After swapping number1= " << a << " and number2= " << b << endl;

    cout << "swap 2 float" << endl;
    cout << "Enter 2 floating number: ";
    cin >> c >> d;
    cout << "Before swapping number1= " << c << " and number2= " << d << endl;
    swap_float(c,d);
    cout << "After swapping number1= " << c << " and number2= " << d << endl;
    
    return 0;
}

// function definition
void swap_int(int a, int b){
    /*
    This function will change value of 2 variable
    */
    int temp = a;
    a = b;
    b = temp;
}

void swap_float(float a, float b){
    /*
    This function will change value of 2 variable
    */
    float temp = a;
    a = b;
    b = temp;
}