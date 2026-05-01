#include <iostream>
using namespace std;

class Employee{
    protected:
        string name;
        int salary;
        
    protected:
        void setInfo(string n,int s){
            this->name = n;
            this->salary = s;
        }
    
};

class Manager : private Employee{
    int bonus;
    
    public:
        void setManagerInfo(string n,int s,int b){
            setInfo(n,s);
            this->bonus = b;
        }
        
        int calSalary(){
            return this->salary += bonus;
        }
        
        void showInfo(){
            cout << "------------   Manager Information   ------------\n\n";
            cout << "Name : " << this->name << "\n" ;
            cout << "Designation : Manager " << "\n" ;
            cout << "Salary : " << this->salary << "\n" ;
            cout << "Bonus :" << this->bonus << "\n" ;
        }
    
};

class Developer : private Employee{
    int overtime;
    
    public:
        void setDevInfo(string n,int s,int ovb){
            setInfo(n,s);
            this->overtime = ovb;
        }
        
        int calSalary(){
            return this->salary += (this->overtime*800);
        }
        
         void showInfo(){
            cout << "------------   Developer Information   ------------\n\n";
            cout << "Name : " << this->name << "\n" ;
            cout << "Designation : Developer " << "\n" ;
            cout << "Salary : " << this->salary << "\n" ;
            cout << "Bonus :" << (this->overtime*800) << "\n" ;
        }
};

int main() {
    
    Manager m;
    m.setManagerInfo("Saeed",120000,10000);
    // cout << m.calSalary();
    m.showInfo();
    
    Developer d;
    d.setDevInfo("Khan",80000,2);
    d.showInfo();
    return 0;
}
