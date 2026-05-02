#include <iostream>
#include <cmath>
using namespace std;


class Bank{
    protected:
        long long accNo;
        string name;
        long long CNIC;
        string dob;
        int pin;
        long balance;
    
};

class Account : private Bank{
    public:
        
        Account(string n,long long nic){
            this->name = n;
            this->CNIC = nic;
        }
        
        void creatAccount(string n,long long nic,string dob,int p){
            this->name = n;
            this->pin = p;
            this->CNIC = nic;
            this->dob = dob;
        }
        
        string checkAccount(string n,long long nic,string dob,int p){
        // string checkAccount(Account &a){
            if(this->name == n || this->CNIC == nic){
                return "Account already exist";
            }
            else{
                creatAccount(n,nic,dob,p);
                return "Account created successfully\n";
            }
        }
        
        void showDetails(){
            cout << this->name << "\n" << this->CNIC << "\n";
        }
        
        // int checkPin(){
        //     int pinSize = (a.pin == 0) ? 1 : floor(log10(abs(a.pin)))+1;
        //     if(pin)
        // }
    
};

int main() {
    
    Account a("Saeed",9232773434),a2("Saeed",9232773434);
    a.creatAccount("Saeed",9232773434,"23-04-2005",1202);
    cout << a.checkAccount("Saeed",9232773434,"23-04-2005",1202);
    a2.showDetails();
    
    return 0;
}
