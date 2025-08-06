//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class student{
    public:
       string name;
       double *cgpaPtr;// use of pointers
       
    student(string name, double cgpa){
        this->name=name;
        cgpaPtr = new double; // create new memory for objects
        *cgpaPtr=cgpa;
        
    }   
    
    student(student &obj){
        cout<<"Hi i am define constructor\n";
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
        
    }
};


int main() {
    student s1("Rajkishor", 8.9);
    
    student s2(s1); // call to define constructor. If constructor is not defined then it will automatically.
    s1.getInfo();
    s2.getInfo();
    *(s2.cgpaPtr)=9.2; //change the cgpa of both s1 and s2 because of pointer. s1 and s2 cgpa point have same address. this is an example of shallow copy.  
    
    s1.getInfo();
    s2.getInfo();
}
