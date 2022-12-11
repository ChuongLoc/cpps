#include <iostream>

using namespace std;

// function declaration
void swap_by_call(int,int);
void swap_by_ref(int &, int &);
void swap_by_pointer(int *,int *);

// function definition
void swap_by_call(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (call by value) in swap_by_call function: " << endl;
    cout << "num1= " << a << " and num2= " << b << endl;
}

void swap_by_ref(int &a,int & b){
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (call by reference) in swap_by_ref function: " << endl;
    cout << "num1= " << a << " and num2= " << b << endl;
}

void swap_by_pointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swapping (call by pointer) in swap_by_ref function: " << endl;
    cout << "num1= " << *a << " and num2= " << *b << endl;
}

int main(){
    int x;
    int y;
    cout << "Enter two integer to swap: ";
    cin >> x >> y;
    cout << endl;
    cout << "Before swapping: " << endl;
    cout << "num1= " << x << "\t num2= " <<y << endl;
    cout << endl;
    // swap by call
    swap_by_call(x,y);
    cout << "After swapping (call by value, outside the function) in swap_by_call function: " << endl;
    cout << "num1= " << x << " and num2= " << y << endl;
    cout << endl;
    // swap by reference
    swap_by_ref(x,y);
    cout << "After swapping (call by value, outside the function) in swap_by_ref function: " << endl;
    cout << "num1= " << x << " and num2= " << y << endl;
    cout << endl;
    
    // swap by pointer
    swap_by_pointer(&x,&y);
    cout << "After swapping (call by value, outside the function) in swap_by_pointer function: " << endl;
    cout << "num1= " << x << " and num2= " << y << endl;
    cout << endl;

    return 0;
}