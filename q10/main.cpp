#include <iostream>

using namespace std;

class Calculate{
    public:

        float area;
        const float PI = 3.1415;

        // function overloading declaration
        void calculate_area(float); // circle
        void calculate_area(float,float); // rectangle
        void calculate_area(float,float,float); // triangle

};

// function definition outside of the class
void Calculate::calculate_area(float radius){
    area = PI * radius * radius;
    cout << "area of circle " << area << endl;
}

void Calculate::calculate_area(float width, float height){
    area = width * height;
    cout << "area of rectangle " << area << endl;
}

void Calculate::calculate_area(float half,float height,float length){
    area = half * height * length;
    cout << "area of triangle " << area << endl;
}


int main(){

    Calculate calc;

    calc.calculate_area(1);

    calc.calculate_area(2,3);

    calc.calculate_area(0.5,1,2);

    return 0;
}