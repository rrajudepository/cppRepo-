//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //Properties or attributes
    private:
       double salary;
    
    
    public:
        string name;
       string dept;
       string subject;
    
       //Non Parametrized constructor
       Teacher(){//constructor always eclare public 
           cout<<"Hi I am constructor\n";
           dept = "CSE"; //it set dept cse to all teacher 
       }
       
       //Parametarized Constructor 
       Teacher(string name, string dept, string subject, double salary){
           this->name =name;
           this->dept =dept;
           (*this).subject=subject; //this->subject and (*this).subject are same
           this->salary = salary;
           
       }
       //copy constructor 
       Teacher(Teacher &orgObj){
           cout<<"Hi I am copy constructor\n";
           this->name =orgObj.name;
           this->dept = "Data Science";
           this->subject = orgObj.subject;
           this->salary = orgObj.salary;
       }
    
    
    
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
        cout<<"dept :"<<dept<<endl;
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
    
    Teacher t3(t2); //define Copy constructor
    t3.getInfo();
	

}
