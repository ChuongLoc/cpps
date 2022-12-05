#include <iostream>

using namespace std;

//Declaration function
float calc_simple_interest(float,float,float);
float calc_compound_interest(float,float);
// Definition function
float calc_simple_interest(float amount,float time, float rate = 3){ // default rate is 3%
    float simple_interest = amount * time * rate /100;
    cout << "Simple interest of princible amount ( amount=" << amount 
            << ",time=" << time << ",rate=" << rate << ") is " << simple_interest << endl;
    return simple_interest; 
}

float calc_compound_interest(float amount,float simple_interest){
    float compound_interest = amount + simple_interest;
    cout << "Compound interest= " << compound_interest << endl;
    return compound_interest;
}

int main(){

    float a;
    float t;
    float r;

    cout << "Enter your amount, time, rate(default=3%) " << endl;
    cin >> a >> t >> r;

    float simple = calc_simple_interest(a,t,r);
    float compound = calc_compound_interest(a,simple);

    cout << "Enter your amount, time" << endl;
    cin >> a >> t;

    simple = calc_simple_interest(a,t);
    compound = calc_compound_interest(a,simple);

    return 0;
}