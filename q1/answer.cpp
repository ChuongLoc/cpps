#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int total_rows = 4;
    // Dynamic initialization of int row
    for (int row = 1; row <=total_rows;row++){
        for (int col=1;col<=row;col++){
            cout << col;
        }
        cout << endl;
    }
    getch();
return 0;
}