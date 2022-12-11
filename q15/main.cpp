#include <iostream>

using namespace std;

class Complex{
    public:
        float real;
        float imag;

        void get_data(){
            cout << "Enter the real part value " << endl;
            cin >> real;
            cout << "Enter the image part value " << endl;
            cin >> imag;
        }

        void show(){
            cout << "Complex number (" << real << "+" << imag << "j )" << endl;
        }
};

// Function declaration
Complex add_complex(Complex,Complex); // function prototyping
Complex sub_complex(Complex,Complex); // function prototyping

// Function definition
Complex add_complex(Complex num1,Complex num2){
    Complex out;
    out.real = num1.real + num2.real;
    out.imag = num2.imag + num2.imag;
    return out;
}
Complex sub_complex(Complex num1,Complex num2){
    Complex out;
    out.real = num1.real - num2.real;
    out.imag = num1.imag - num2.imag;
    return out;
}

int main(){

    Complex a;
    Complex b;

    a.get_data();
    b.get_data();
    
    a.show();
    b.show();
    
    Complex out1 = add_complex(a,b);
    out1.show();
    
    Complex out2 = sub_complex(a,b);
    out2.show();
    return 0;
}