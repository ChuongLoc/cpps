#include <iostream>
#include <conio.h>

using namespace std;

class Polar{

    public:
        float radius;
        float angle;

        // default constructor definition
        Polar(){
            radius = 0;
            angle = 0;
            cout << "Default constructor Invoked \n";
            cout << "Radius= " << radius << "\t Angle= " << angle << endl;
        }
        
        // parameterized constructor definiton
        Polar(float r,float a){
            radius = r;
            angle = a;
            cout << "Parameterized constructor Invoked \n";
            cout << "Radius= " << radius << "\t Angle= " << angle << endl;
        }

        Polar(Polar &p){
            radius = p.radius;
            angle = p.angle;
            cout << "Copy constructor Involed " << endl;
            cout << "Radius= " << radius << "\t Angle= " << angle << endl;
        }

        ~Polar(){
            cout << "Destructor Invoked " << endl;
        }

};

int main(){

    cout << "BLock 1 begins \n";

    Polar p1; // object created and default constructor called
    {
        cout << "Block 2 begins \n";
        Polar p2(5,7); // object created and parameterized constructor called
        {
            cout << "Block 3 begins \n";
            Polar p3 = p2; // object created and copy constructor called
            cout << " Block 3 ends \n";
            // destructor called automaticlly
        }
        cout << " Block 2 ends \n";
        // destructor called automaticlly
    }
    cout << " Block 1 ends \n";
    // destructor called automaticlly

    getch();

    return 0;
}