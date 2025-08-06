#include <bits/stdc++.h>
using namespace std;
//multi level inheritance.
class person{
    public:
      string name;
      int age;
      
};
class student: public person{
    public:
      int rollNo;
};
class gradStudent: public student{
    public:
       string researchArea;
       
       
    void getInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollNo<<endl;
        cout<<researchArea<<endl;
    }
};
int main() {
	// your code goes here
	gradStudent s1;
	s1.name="Rahul";
	s1.age=21;
	s1.rollNo=12345;
	s1.researchArea="Mathematics";
	s1.getInfo();
	

}
