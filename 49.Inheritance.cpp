#include <bits/stdc++.h>
using namespace std;

class person{
    public:
      string name;
      int age;
      
     /* person(string name, int age){
          this->name = name;
          this->age =age;
      }*/
      
      person(){
          cout<<"This is parent constructor\n";
      }
};
//Inheritance class 
class student : public person{
    public:
      int rollNo;
      
      student() {
          cout<<"This is child constructor\n";
          
      }
      
      void getInfo(){
          cout<<"Name :"<<name<<endl;
          cout<<"age :"<<age<<endl;
          cout<<"roll No :"<<rollNo<<endl;
      }
};

int main() {
	// your code goes here
	student s1;
	s1.name = "Neha Kumari";
	s1.age = 21;
	s1.rollNo =1234;
	s1.getInfo();

}
