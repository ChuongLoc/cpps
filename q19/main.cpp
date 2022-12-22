#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class books
{
    int book_id;
    char title[20];
    char author[20];
    float price;
    char edition[20]; //data members
    public:
        void add_book();
        int search_book(char tmp[20]);
        void display_books(); //member function declaration
};

void books::add_book(){
    cout << "Enter book's details: " << endl;
    cout << "Book ID: ";
    cin >> book_id;
    cout << "Title: ";
    cin >> title;
    cout << "Author: ";
    cin >> author;
    cout << "Price: ";
    cin >> price;
    cout << "Edition: ";
    cin >> edition;
}

int books::search_book(char tmp_author[20]){
    if(strcmp(tmp_author,author)){
        display_books();
        return 1;
        }
    else{ return 0;}
    }

void books::display_books(){
    cout << "Books details..." << endl;
    cout << "Book ID: " << book_id;
    cout << "\t Title: " << title << endl;
    cout << "\t Author: " << author << endl;
    cout << "\t Price: " << price << endl;
    cout << "\t Edition: " << edition << endl;
}

void loop(char c){
    int j;
    char ch;
    ch = c;
    for(j=0;j<60;j++){
        cout << ch;
    }
}
int main(){

    // books book[20]; // array of books objects
    books * ptr,book[20];
    ptr = book;
    int inc;
    int total_books = 0;
    int k;
    // User interactive
    do{
        int option;
        cout << endl;
        cout << "Enter 1 for add book" << endl;
        cout << "Enter 2 for search book" << endl;
        cout << "Enter 3 for display all books" << endl;
        cout << "Enter 4 for exit from the program" << endl;
        cout << endl << "Option please: ";
        cin >> option;
        cout << endl;
        inc = 0;
        switch(option){
            // add book
            case 1:{
                cout << "Option1: Add book" << endl;
                book[total_books].add_book();
                cout << "\t\t\t One book added..." << endl;
                total_books++;
                inc++;
            }
            break;
            // search book
            case 2:{
                cout << "Option2: Search book" << endl;
                char tmp_auth[20];
                cout << "Who is the author of the book? please enter: ";
                cin >> tmp_auth;
                int i;
                int found_count=0;
                for(i=0;i<total_books;i++){
                    found_count = found_count + book[i].search_book(tmp_auth); //acumulate found count result
                    if(found_count > 0){
                        cout << "\t\t\t" << found_count << "book(s) found..." << endl;
                    }
                    else{
                        cout << "\t\t\t No book found..." << endl;
                    }
                }
            }
            break;
            // display book
            case 3:{
                cout << "Option3: Display book" << endl;
                for(k=0;k<total_books;k++){
                    loop('-');
                    cout << "\nBook " << k+1 << endl;
                    book[k].display_books();
                    loop('-');
                    cout << endl;
                }
            }
            break;
            // exit
            case 4:{
                exit(1); // exit statement
            }
            break;
            default:
                cout << "Choose right option" << endl;
        } // switch case ends

    }
    while(1); // do while ends

    getch();

    return 0;
}
