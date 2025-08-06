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

class account{
    private:
    double balance;
    string password; //Data hiding
    
    public:
    string accountID;
    string username;
}

int main() {
	// assigning object
	Teacher t1; //constructor call
	Teacher t2;
	Teacher t3;
	Teacher t4;
	Teacher t5;
	
	t1.name= "Rajkishor";
	t1.subject="C++";
	t1.dept="CSE";
	t1.setSalary(250000);
	
	
	cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
	

}
