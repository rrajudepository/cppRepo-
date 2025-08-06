//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class student{
    public:
       string name;
       double cgpa;
       
    student(string name, double cgpa){
        this->name=name;
        this->cgpa=cgpa;
        
    }   
    
    student(student &obj){
        cout<<"Hi i am define constructor\n";
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"cgpa : "<<cgpa<<endl;
        
    }
};


int main() {
    student s1("Rajkishor", 8.9);
    
    student s2(s1); // call to define constructor. If constructor is not defined then it will automatically.
    s2.getInfo();
	
	

}
