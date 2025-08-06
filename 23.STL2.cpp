#include <bits/stdc++.h>
#include <set>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second< p2.second) return true;
    else return false;
}

int main() {
	// your code goes here
	//set ignore duplicate value.. store only unique value
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	//insert, emplace, count, erase, find, size, empty,lower bound, upper bound
	s.insert(1);//ignore duplicate value
	s.insert(2);//ignore it
	cout<<s.size()<<"\n";
	for(int i : s){
	    cout<<i<<" ";
	}
	s.clear();// empty the set
	cout<<endl;

    set<int> s1 = {3, 1, 4, 2};
    unordered_set<int> us = {3, 1, 4, 2};

    cout << "Set (ordered): ";
    for (int x : s1) cout << x << " ";  // Output: 1 2 3 4

    cout << "\nUnordered Set: ";
    for (int x : us) cout << x << " "; // Output: Order not guaranteed

    /*
    When to Use:
    Use set when you need the elements sorted or need to perform range queries.

    Use unordered_set when you just need fast lookup, insert, delete, and don't care about the order.

    */



	
	//Inbuild function used in C++
	
	int arr[]={3,4,5,2,1,9,8,7};
	sort(arr, arr+8); //sort the array in O(nlogn) time
	for(int i=0;i<8;i++){
	    cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	vector<int> vec={3,4,5,2,1,9,8,7};
	sort(vec.begin(), vec.end());
	for(int i:vec){
	    cout<<i<<" ";
	}
	cout<<endl;
	sort(arr, arr+8, greater<int>()); //sort in descending order
	for(int i=0;i<8;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	vector<pair<int, int>> vec2={{3,1},{2,5},{1,3},{6,2},{4,5}};
	sort(vec2.begin(), vec2.end()); //sort the according to first element.
	for(auto i:vec2){
	    cout<<i.first<<" "<<i.second<<" ";
	}
	cout<<endl;
	
	
	//comparator define the basis of sorting 
	sort(vec2.begin(), vec2.end(), comparator); //sorting on the basis of second value
	for(auto i:vec2){
	    cout<<i.first<<" "<<i.second<<" ";
	}
	cout<<endl;
	
	//reverse the vector 
	reverse(vec.begin(), vec.end());
	for(int i:vec){
	    cout<<i<<" ";
	}
	cout<<endl;
	
	reverse(vec.begin()+1, vec.begin()+3); //reverse 2nd and 3rd element
	for(int i:vec){
	    cout<<i<<" ";
	}
	cout<<endl;

	string str = "rajkishor, ranjan, iitp, cse,";
	int count2 = count(str.begin(), str.end(),',');//count number of words separated by ','
	cout<<count2<<endl;
	
	string str1 ="acb";
	next_permutation(str1.begin(), str1.end()); //replace str1 with next permutation alphabetically 
	cout<<str1<<endl;
	prev_permutation(str1.begin(), str1.end());
	cout<<str1<<endl;
	
	cout<<max(5,6)<<" "<<min(7,10)<<endl;
	int a=10,b=20;
	swap(a,b);
	cout<<a<<" "<<b<<endl;

	
	//check this again
	vector<int> vec4={3,4,5,2,1,9,8,7};
	//cout<<max_element(vec4.begin(), vec4.end())<<endl; //give max value in vector 
	//cout<<max_element(vec4.begin(), vec4.end())<<endl; // give min value in vector 
	//cout<<binary_search(vec4.begin(), vec4.end(), 10)<<endl; 
	
	return 0;

}


/*
C:\Program Files\Java\jdk-24\

for Java program
file name in java should be equal to class name.
javac .\fileName.java
java -cp . fileName

for C++ program
g++ .\fileName.cpp -o a.exe
./a.exe
*/