#include <iostream>
#include <list>
using namespace std;

class Stack{
    list<int> ll;
    
    public:
    
    void push(int val){ //O(1)
        ll.push_front(val);
    }
    
    void pop(){//O(1)
        ll.pop_front();
    }
    
    int top(){//O(1)
       return ll.front();
    }
    
    bool empty(){
        if(ll.size()==0)
        return true;
        else
        return false;
    }
};
int main() {
	// your code goes here
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	
	while(!s.empty()){
	    cout<<s.top()<<" ";
	    s.pop();
	}
	cout<<endl;
	
	
	return 0;
	
}
