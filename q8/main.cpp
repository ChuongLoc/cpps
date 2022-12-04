#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

inline bool check_vowel(char a){
    bool check = false;

    if ((a=='A') || (a=='E') || (a=='O') || (a=='U') || (a=='I') ||
     (a=='a') || (a=='e') || (a=='o') || (a=='u') || (a=='i')){
        check = true;
     }
     else{
        check = false;
     }
    return check;
}

int count_vowel(string b){
    int count = 0;
    bool is_vowel = false;
    for(int i=0;i<b.size();i++){
        // cout << b[i] << endl;
        is_vowel = check_vowel(b[i]);
        if(is_vowel){
            count +=1;
        }
    }
    return count;
}

int main(){

    string s;

    cout << "Enter your string" << endl;

    cin >> s;

    // cout << "Check vowel " << check_vowel(s[0]) << endl;

    int no_vowel = count_vowel(s);

    cout << "Number of vowel in " << s << " = " << no_vowel << endl;

    return 0;
}