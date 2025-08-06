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
        cgpaPtr = new double; // allocate new memory for objects
        *cgpaPtr=cgpa;
        
    }   
    
    student(student &obj){
        cout<<"Hi i am define constructor\n";
        this->name = obj.name;
        cgpaPtr=new double; //Allocating new memory (Deep copy constructor)
        *cgpaPtr = *obj.cgpaPtr;
    }
    
    //destructor 
    ~student(){
        cout<<"Hi I delete everything\n";
        delete cgpaPtr;
    }
    
    
    
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
        
    }
};


int main() {
    student s1("Rajkishor", 8.9);
    
    s1.getInfo();
    //destructor delete everything at the end of main fucntion.
    return 0;
	
	

}
