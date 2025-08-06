#include <bits/stdc++.h>
using namespace std;

//Hierarchial Inheritance
class person {
    public:
       string name;
       int age;
};

class student : public person{
    public:
      int rollNo;
};

class teacher: public person{
    public:
       string subject;
       double salary;
};

int main() {
	// your code goes here

}
