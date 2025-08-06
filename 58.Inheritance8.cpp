#include <bits/stdc++.h>
using namespace std;


void func(){
    int x=0;
    cout<<"x : "<<x<<endl;
    x++;
    
}

void func2(){
    static int y=0; //not destroyed after the function. exit lifetime of the program.
    cout<<"y : "<<y<<endl;
    y++;
}

class A{
    public:
      int x;
       
       void incX(){
           x=x+1;
       }
};

class B{
    public:
      static int y;
      void incY(){
          y=y+1;
      }
};
int main() {
	// your code goes here
	func();
	func();
	func();
	func2();
	func2();
	func2();
	
	
	A obj;
	obj.x=0;
	cout<<obj.x<<endl;
	obj.incX();
	cout<<obj.x<<endl;
	
	A obj2;
	obj2.x=0;
	cout<<obj2.x<<endl;
	obj2.incX();
	cout<<obj2.x<<endl;
	
	


}
