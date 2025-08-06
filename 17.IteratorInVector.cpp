#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> vec={1,2,3,4,5,6};
	vector<int>::iterator itr; //creating iterator that point to location of value of vector 
	for(itr=vec.begin();itr!=vec.end();itr++){ //itr point to  first element
	    cout<<*(itr)<<" ";
	}
	cout<<endl;
	
	vector<int>::reverse_iterator itr2 ;
	for(itr2 = vec.rbegin(); itr2!=vec.rend();itr2++){ //print in reverse order
	     cout<<*(itr2)<<" ";
	}
	cout<<endl;
	for(auto it =vec.begin(); it!=vec.end();it++){ //create an iterator automatically 
	    cout<<*(it)<<" ";
	}
	cout<<endl;
	for(auto it2=vec.rbegin(); it2!=vec.rend();it2++){
	    cout<<*(it2)<<" ";
	}
	cout<<endl;

}
