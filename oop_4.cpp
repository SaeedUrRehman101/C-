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
        
        // Account(string n,long long nic){
        //     this->name = n;
        //     this->CNIC = nic;
        // }
        
        void setDetails(string n,long long nic,string dob,int p){
            if(checkPin(p)){
                this->name = n;
                this->pin = p;
                this->CNIC = nic;
                this->dob = dob;
            }else{
                cout << "PIN must be exactly 4 digits.";
            }
        }
        
        void resetAccount() {
            name = "";
            CNIC = 0;
            dob = "";
            pin = 0;
            balance = 0;
            accNo = 0;
        }
        
        // string checkAccount(Account &acc){
        //     if(this->name == acc.name || this->CNIC == acc.CNIC){
        //         acc.name = "";
        //         acc.CNIC = 0;
        //         acc.dob = "";
        //         acc.pin = 0;
        //         return "Account already exist\n";
        //     }
        //     else{
        //         creatAccount(acc.name,acc.CNIC,acc.dob,acc.pin);
        //         return "Account created successfully\n";
        //     }
        // }
        
        bool checkAccount(Account &acc){
            if(this->name == acc.name || this->CNIC == acc.CNIC){
                resetAccount();
                return false;
            }
            else{
                return true;
            }
        }
        
        void creatAccount(string n,long long nic,string dob,int p){
            if(checkPin(p)){
                this->name = n;
                this->pin = p;
                this->CNIC = nic;
                this->dob = dob;
                cout << "Account created succesfully.\n";
            }else{
                cout << "PIN must be exactly 4 digits.";
            }
        }
        
        void showDetails(){
            cout << this->name << "\n" << this->CNIC << "\n";
        }
        
        bool checkPin(int pin){
            int pinSize = (pin == 0) ? 1 : floor(log10(abs(pin)))+1;
            if(pinSize > 4){
                return false;
            }else{
                return true;
            }
        }
    
};

int main() {
    
    Account a,a2;
    a.setDetails("Saeed",9232773434,"23-04-2005",1202);
    a2.setDetails("Saeed",9232773435,"23-04-2005",1202);
    if(a2.checkAccount(a)){
        a2.creatAccount("Saaed",9232773435,"23-04-2005",1202);
    }else{
        cout << "Account already exist\n";
    }
    a2.showDetails();
    a.showDetails();
    
    return 0;
}
