#include <iostream>
#include <deque>
#include <list>
using namespace std;

int main() {
	// your code goes here
	deque<int> d={1,2,3,4,5};
	for(int i: d){
	    cout<<i<<" ";
	}
	cout<<endl;
	cout<<d[2]<<endl;
	
	
	list<int> l={1,2,3,4,5};
	for(int i: l){
	    cout<<i<<" ";
	}
	cout<<endl;
	//cout<<l[2]<<endl; //not work in list 

	//In deque, we can add and delete from both end back and front
	//In Queue , we can add and delete from front only not back.
	deque<int> dq;
	
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_front(4);
	dq.push_front(5);
	cout<<dq.front()<<" "<<dq.back()<<endl;
	dq.pop_back();
	cout<<dq.back()<<endl;
	dq.pop_front();
	cout<<dq.front()<<endl;

}
