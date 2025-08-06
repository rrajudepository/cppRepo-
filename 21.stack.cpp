#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	
	cout<<"top element :"<<s.top()<<endl;
	
	s.pop(); //remove top element 
	cout<<"top element :"<<s.top()<<endl;
	s.push(5);
	cout<<"Size of stack s is "<<s.size()<<endl; //print size of stack i.e 5
	
	stack<int> s2;
	
	/*s2.swap(s); //swap element of s into s2 and make s empty;
	cout<<"Size of stack s is "<<s.size()<<endl;
	cout<<"Size of stack s2 is "<<s2.size()<<endl;*/
	
	
	while(!s.empty()){
	    cout<<s.top()<<" ";
	    s.pop();
	}
	cout<<endl;
	cout<<"Size of stack s is "<<s.size()<<endl; //print size of stack i.e 0
	
	return  0;

}
