#include <iostream>
#include <conio.h>
using namespace std;

class Polar{
    float radius;
    float angle;
    
    public:
        // constructor overloaded
        // default constructor
        Polar(){
            radius=0;
            angle=0;
            cout << "Default constructor invoked"<<endl;
        }
        // parameterized constructor
        Polar(float radius,float angle){
            this->radius=radius;
            this->angle=angle; // this pointer is used to avoid conflict angle=angle
            cout << "Parameterized constructor invoked" << endl;
        }
        // copy constructor
        Polar(Polar &p){
            radius=p.radius;
            angle=p.angle;
            cout<<"Copy constructor invoked"<<endl;
        }

        void display(){
            cout << "Radius: " << radius << endl;
            cout << "Angle: " << angle << endl;
        }
};

int main(){
    // default constructor
    Polar p1;
    p1.display();

    //Parameterized constructor invoked
    Polar p2(4,5);
    p2.display();

    //copy constructor invoked
    Polar p3 = p2;
    p3.display();

    getch(); // After execution, press key to exit program

    return 0;
}