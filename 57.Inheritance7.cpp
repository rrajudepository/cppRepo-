#include <bits/stdc++.h>
using namespace std;

class Shape{ //abstarct class
    virtual void draw() =0; //pure virtual fucntion
};

class Circle: public Shape{
    public:
      void draw(){
          cout<<"Drawing a circle\n";
      }
};
int main() {
	// your code goes here
	Circle c1;
	c1.draw();
	
	return 0;

}
