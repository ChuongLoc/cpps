#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int total_rows = 4;
    for (int row = 0; row <=total_rows,row++){
        for(int col=0; col<=(total_rows *2)-1;col++){
            if(col > total_rows - row && col < total_rows + row){
                if((row+col)%2!=0){
                    cout << "*";
                }
                else{
                    cout << "";
                }
            }
            else{
                cout << "";
            }
        }
        cout << endl;
    }
    return 0;
}