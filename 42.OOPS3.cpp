//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //Properties or attributes
    private:
       double salary;
    
    
    public:
    
       //Non Parametrazed constructor
       Teacher(){//constructor always eclare public 
           cout<<"Hi I am constructor\n";
           dept = "CSE"; //it set dept cse to all teacher 
       }
       
       //Parametarized Constructor 
       Teacher(string n, string d, string s, double sal){
           name =n;
           dept =d;
           subject=s;
           salary = sal;
           
       }
       string name;
       string dept;
       string subject;
    
    
    
    //method or member functions
    void changeDept(string newDept){
        dept =newDept;
    }
    void setSalary(double s){
        salary =s;
    }
    double getSalary(){
        return salary;
    }
    
    void getInfo(){
        cout<<"Name :" <<name<<endl;
        cout<<"Subject :"<<subject<<endl;
    }
    
};

class student{
    public:
       string name;
       string rollNo;
       double marks;
};


int main() {
	// assigning object
	Teacher t1; //call to non-parameterized constructor 
	
	
	t1.name= "Rajkishor";
	t1.subject="C++";
	t1.setSalary(250000);
	
	
	cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
    
    Teacher t2("Raj","CSE","C++",25000); //call to parameterized constructor 
    t2.getInfo();
    t1.getInfo();
	

}
