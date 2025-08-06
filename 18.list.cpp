//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
//List 
int main() {
	// your code goes here
	list <int> l; //craeting a list of integer
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	
	for(int i : l){
	    cout<<i<<" ";
	}
	cout<<"\n";
	
	l.push_front(5);//add 5 to the front. 
	l.push_front(6);//add 6 to the front. 
	for(int i : l){
	    cout<<i<<" ";
	}
	cout<<"\n"; 
	
	
	
	l.emplace_back(7); // same as push_back 
	for(int i : l){
	    cout<<i<<" ";
	}
	cout<<"\n"; 
	l.pop_back(); //delete the last element
	l.pop_front(); //delete the first element
	for(int i : l){
	    cout<<i<<" ";
	}
	cout<<endl;
}

/*
| Property                    | Description                                                           |
| --------------------------- | --------------------------------------------------------------------- |
| **Data structure**          | Doubly linked list                                                    |
| **Dynamic sizing**          | Automatically grows/shrinks with insertions/deletions                 |
| **Bidirectional iteration** | Supports forward and backward traversal                               |
| **Fast insertion/deletion** | O(1) time to insert/delete anywhere (given iterator)                  |
| **Slow random access**      | No direct access like `list[2]` (no operator\[])                      |
| **Supports duplicates**     | Allows duplicate elements                                             |
| **Stable iterators**        | Iterators remain valid after insert/erase (except for erased element) |

*/