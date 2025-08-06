//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //Properties or attributes
    private:
       double salary;
    
    
    public:
    
       //Non Paraetrazed constructor
       Teacher(){//constructor always declare publically
           cout<<"Hi I am constructor\n";
           dept = "CSE"; //it set dept cse to all teacher 
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
    
};

class student{
    public:
       string name;
       string rollNo;
       double marks;
};


int main() {
	// assigning object
	Teacher t1; //constructor call
	Teacher t2;
	
	t1.name= "Rajkishor";
	t1.subject="C++";
	t1.setSalary(250000);
	
	
	cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
	

}
