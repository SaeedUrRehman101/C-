#include <iostream>
using namespace std;

class book{
    public:
        string title,author;
        int price;
        string avaStatus;
    
    public:
        void setDetails(string t,string a,int p,string sta){
            this->title = t;
            this->author = a;
            this->price = p;
            this->avaStatus = sta;
        }
    
};

class Library : public book{
    
    public:
    bool checkBook(string title){
        if(this->title == title){
            return true;
        }else{
            return false;
        }
    }
    
    void displayBook(Library &l){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "Status: " << avaStatus << endl;
    }
    
};

int main() {
    Library l;
    l.setDetails("ABC","Ali",2000,"Availiable");
    Library l_2;
    l_2.setDetails("DFG","Khan",2000,"Availiable");
    if(l.checkBook("ABC")){
        l.displayBook(l);
    }else{
        cout << "Book not found.";
    }

    return 0;
}
