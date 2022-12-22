#include <iostream>
#include <conio.h>

using namespace std;

class Csquare{
    public:
        double Side;
        Csquare():Side(0.00){} // default constructor
        Csquare(double side): Side(side) {} // passing argument constructor
        ~Csquare(){}
        double getSide() const {return Side;}
        void setSide(const double s){
            if (s <= 0){
                Side == 0.0;
            }
            else{
                Side = s;
            }
        }
        double Perimeter(){return Side * 4;}
        double Area() {return Side * Side;}
};

int main(){
    Csquare * sqr[4];
    sqr[0] = new Csquare; // heap memory
    sqr[0]->setSide(24.55);
    sqr[1] = new Csquare;
    sqr[1]->setSide(15.08);
    sqr[2] = new Csquare;
    sqr[2]->setSide(8.212);
    sqr[3] = new Csquare;
    sqr[3]->setSide(202.24);

    cout << "Squares Characteristics " << endl;

    cout << "Square 1" << endl;
    cout << "Side: " << sqr[0]->getSide() << endl;
    cout << "Perimeter: " << sqr[0]->Perimeter() << endl;
    cout << "Area: " << sqr[0]->Area() << endl;

    cout << "Square 2" << endl;
    cout << "Side: " << sqr[1]->getSide() << endl;
    cout << "Perimeter: " << sqr[1]->Perimeter() << endl;
    cout << "Area: " << sqr[1]->Area() << endl;

    cout << "Square 3" << endl;
    cout << "Side: " << sqr[2]->getSide() << endl;
    cout << "Perimeter: " << sqr[2]->Perimeter() << endl;
    cout << "Area: " << sqr[2]->Area() << endl;

    cout << "Square 4" << endl;
    cout << "Side: " << sqr[3]->getSide() << endl;
    cout << "Perimeter: " << sqr[3]->Perimeter() << endl;
    cout << "Area: " << sqr[4]->Area() << endl;

    getch();

    return 0;
}