#include <iostream>

using namespace std;

int main(){
    
    string a  = "Hello world!";

    cout << "Enter your custom string: " << endl;
    
    cin >> a;
    
    string b = a;

    // cout << a[0] << endl; // Print out the first character
    cout << "Length of string: " << a.size() << endl; // Print length of string

    for(int i; i<a.size();++i){
        cout << "Step " << i << " Revert step " << (a.size() - 1 - i ) << endl;
        b[i] = a[a.size() - 1 - i];
    }

    cout << "Reverted string: " << b << endl;

    return 0;
}