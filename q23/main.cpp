#include <iostream>
#include <conio.h>

using namespace std;

class Polar{
    float radius;
    float angle;
    public:
        // parameterized constructor with default arguments
        Polar(float radius=0,float angle=0){
            // format argument is same as data member
            this->radius=radius;
            this->angle=angle; //this pointer is used to avoid conflict
            cout << "Parameterized constructor invoked" << endl;
        }
        // copy constructor
        Polar(Polar &p){
            radius=p.radius;
            angle=p.angle;
            cout << "Copy constructor invoked" << endl;
        }

        void display(){
            cout << "Radius: " << radius << endl;
            cout << "Angle: " << angle << endl;
        }
};

int main(){
    Polar p1; // default argument parameterized constructor invoked
    p1.display();

    Polar p2(4); // default argument parameterized constructor invoked
    p2.display();

    Polar p3(2,3); // parameterized constructor invoked
    p3.display();

    Polar p4 = p3; //copy constructor invoked
    p3.display();

    getch();

    return 0;
}