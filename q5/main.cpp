#include <iostream>

using namespace std;

struct Complex{
    float real; // value real part
    float imag; // value imaginary part

    void get_data(){
        cout << "Enter value of real part: " << endl;
        cin >> real;
        cout << "Enter value of imaginary part: " << endl;
        cin >> imag;
    }

    void display(){
        cout << "(" << real << "+" << imag << "i)";
    }
};

// Function declaration
Complex add(Complex,Complex); // function having complex type arguments

// Function definition
Complex add(Complex c1,Complex c2){
    Complex c;
    c.real = c1.real + c2.real; // adding real parts storing in c.real
    c.imag = c1.imag + c2.imag; // adding imag parts and storing in c.imag

    return c; // returning a value of type comple
}

int main(){

    Complex num1;
    num1.get_data();
    // num1.display();

    Complex num2;
    num2.get_data();
    // num2.display();

    Complex result = add(num1,num2);

    cout << "Add: ";
    num1.display();
    cout << " + ";
    num2.display();
    cout << " = ";
    result.display();
    cout << endl;
    return 0;
}