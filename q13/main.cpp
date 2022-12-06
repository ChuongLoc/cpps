#include <iostream>

class Array{
    public:
        Array(int n1,int n2,int n3, int n4, int n5){
            a[0] = n1;
            a[1] = n2;
            a[2] = n3;
            a[3] = n4;
            a[4] = n5;
        }; // end of constructor

        ~Array(){}; // destructor

        int a[5]; // integer array

}; // end of class

int main(){

    Array array(10,20,30,40,50);

    for(int i =0;i<5;i++){
        std::cout << array.a[i] << std::endl;
    } // end of for
    
    return 0;
} // end of main