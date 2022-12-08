#include<iostream>
#include<conio.h>

using namespace std;

class StaticDemo{
    public:
        static double findFacto(double); // static member function declaration
        static void checkPrime(int); // static member function declaration
}; // end of class

double StaticDemo::findFacto(double n){
    if( n < 1){
        return 1;
    }
    else{
        return n*findFacto(n-1); // function call itself, recursion
    }
} // end of function

void StaticDemo::checkPrime(int a){
    int i;
    int j;
    int c= 0;
    for(i=1;i<=a;i++){
        if(a%i == 0){
            c++; // count zero modular time
        } // end of if
    } // end of for
    if(c<=2){
        cout << a << " is prime number" << endl;
    }
    else{
        cout << a << " is not a prime number" << endl;
    }
} // end of function

int main(){
    double num;
    cout << "Enter a number which factorial you want: ";
    cin >> num;
    double fact = StaticDemo::findFacto(num); // calling static member function without creating an instance
    cout << "Factorial is: " << fact << endl;
    StaticDemo::checkPrime(num);
    getch();
    return 0;
}