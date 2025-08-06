#include <bits/stdc++.h>
using namespace std;
//function overloading
class Parent{
    public:
       void getInfo(){
           cout<<"Parent class\n";
       }
       
       virtual void hello(){ //virtual function
           cout<<"Hello from parent\n";
       }
};

class Child:public Parent{
    public:
        void getInfo(){
            cout<<"Child class\n";
        }
        
        void hello(){
            cout<<"Hello from child\n";
        }
};

int main() {
	// your code goes here
	Child c1;
	c1.getInfo(); //child class function execute
	
	
	Parent p1;
	p1.getInfo(); //parent class function execute
	c1.hello();
	p1.hello();
	 return 0;

}
