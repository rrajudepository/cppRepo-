#include <bits/stdc++.h>
using namespace std;

class person{
    public:
      string name;
      int age;
      
      person(string name, int age){
          this->name = name;
          this->age =age;
      }
      
      person(){
          cout<<"This is parent constructor\n";
      }
};
//Inheritance class 
class student : public person{
    public:
      int rollNo;
      
      student(string name, int age, int rollNo) : person(name, age) {
          cout<<"This is child constructor\n";
          this->rollNo = rollNo;
          
      }
      
      void getInfo(){
          cout<<"Name :"<<name<<endl;
          cout<<"age :"<<age<<endl;
          cout<<"roll No :"<<rollNo<<endl;
      }
};

int main() {
	// your code goes here
	student s1("Neha Kumari",21, 12345);
	/*s1.name = "Neha Kumari";
	s1.age = 21;
	s1.rollNo =1234;*/
	s1.getInfo();

}
