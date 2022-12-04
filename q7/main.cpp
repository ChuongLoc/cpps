#include <iostream>

using namespace std;

const float PI = 3.1415;

inline area_circle(){
    float r;
    cout << "Enter radius of circle: " << endl;
    cin >> r;
    cout << "Area of circle: " << PI * r * r << endl;
}

inline area_rectangle(){
    float w;
    float h;
    cout << "Enter width of rectangle: " << endl;
    cin >> w;
    cout << "Enter height of rectangle: " << endl;
    cin >> h;
    cout << "Area of rectangle: " << w * h << endl;
}

inline area_square(){
    float a;
    cout << "Enter width of square: " << endl;
    cin >> a;
    cout << "Area of square: " << a * a << endl;
}

inline area_triangle(){
    float h;
    float l;
    cout << "Enter height of triangle: " << endl;
    cin >> h;
    cout << "Enter lenght of triangle: " << endl;
    cin >> l;
    cout << "Area of triangle: " << 0.5 * h * l << endl;
}

int main(){

    area_circle();

    area_rectangle();

    area_square();

    area_triangle();

    return 0;
}