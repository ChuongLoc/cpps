#include <iostream>

using namespace std;

inline void add(float a, float b){
    float c = a + b;
    cout << a << " + " << b << " = " << c << endl;
}

inline void subtract(float a, float b){
    float c = a - b;
    cout << a << " - " << b << " = " << c << endl;
}

inline void multi(float a, float b){
    float c = a * b;
    cout << a << " * " << b << " = " << c << endl;
}

inline void divide(float a, float b){
    float c = a / b;
    cout << a << " / " << b << " = " << c << endl;
}

int main(){
    float n1;
    float n2;

    cout << "Enter numbers " << endl;
    cin >> n1 >> n2;
    cout << "number1 " << n1 << " number2 " << n2 << endl;

    add(n1,n2);

    subtract(n1,n2);

    multi(n1,n2);

    divide(n1,n2);

    return 0;
}