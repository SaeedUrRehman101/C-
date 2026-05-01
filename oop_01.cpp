// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Student{
    int rollNo;
    string name;
    float marks[3];
    
  public:    
    float totalMarks(float m[],int i=0){
        if(i==3){
            return 0;
        }
        return m[i] + totalMarks(m,i+1);
    }
    
    float calPercent(float m){
        float Percentage = (m*100)/300;
        return Percentage;
    }
    
    string grade(float per){
        if(per >= 90){
            return "A+ Grade";
        }else if(per >=80 && per<90){
            return "A Grade";
        }else if(per >=70 && per<80){
            return "B= Grade";
        }else if(per >=60 && per<70){
            return "B Grade";
        }else if(per >=50 && per<60){
            return "Pass";
        }else{
            return "Fail";
        }
    } 
    
};


int main() {
    float arr[3] = {50,30,20};
    Student S;
    float totalmarks = S.totalMarks(arr,0);
    float percentage = S.calPercent(totalmarks);
    cout << "Total Marks :" << totalmarks<< "\n";
    cout << "Percentage : " << percentage << "\n";
    cout << "Grade is : " << S.grade(percentage);
    return 0;
}