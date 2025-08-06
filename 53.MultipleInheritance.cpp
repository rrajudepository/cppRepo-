#include <bits/stdc++.h>
using namespace std;
//Multiple Inheritance
class student{
    public:
        string name;
        int rollNo;
        
};
class teacher{
    public:
       string subject;
       double salary;
};

class TA : public student, public teacher{
    public:
    string researchArea;
    
    void getInfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"rollNo :"<<rollNo<<endl;
        cout<<"subject :"<<subject<<endl;
        
        
    }
};

int main() {
    // your code goes here
   TA t1;
   t1.name ="Tony Stark";
   t1.rollNo=12345;
   t1.subject="CSE";
   t1.salary=25000;
   t1.researchArea="Mathematics";
   t1.getInfo();
}
