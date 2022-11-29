#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int start = 0; // start index
    int count = 0; // number of star in row
    for(int i = 1;i<=4;i++){
        // cout << i << endl;
        start = 5-i; // update init value for start
        count = 0; // update init value for cout
        for(int j=0;j<=7;j++){
            if((j==start) && (count != i)){
                cout << "*";
                start = start +2;
                count +=1;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}