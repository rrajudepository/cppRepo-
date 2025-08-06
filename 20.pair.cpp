#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	pair<int , int> p={1,5}; //no need to include the library function of pair
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	
	pair<char, int> p2 ={'a',10};
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	
	pair<int, pair<char, int>> p3 ={7, {'b',8}}; //pair of pair 
	cout<<p3.first<<endl;
	//cout<<p3.second<<endl; //give error because it is pair charactor
	cout<<p3.second.first<<endl;
	cout<<p3.second.second<<endl;
	
	
	vector<pair<int, int>> vec ={{1,2},{3,4},{5,6}}; //vector of pairs
	
	for(pair<int, int> p : vec){
	    cout<<p.first<<" "<<p.second<<endl;
	}
	for(auto p : vec){ //auto keyword automatically takes pair data type in C++
	    cout<<p.first<<" "<<p.second<<endl;
	}
	
	
	vec.push_back({4,5}); //insert 
	vec.emplace_back(5,6); //in-place objects create
	for(auto p : vec){ //auto keyword automatically takes pair data type in C++
	    cout<<p.first<<" "<<p.second<<endl;
	}
	

}
