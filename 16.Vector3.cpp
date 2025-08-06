#include <bits/stdc++.h>
using namespace std;
//STL 
int main() {
	// your code goes here
    vector<int> nums(4,-1);
	nums[0]=19;
	nums[1]=12;
	nums.push_back(15);
	nums.push_back(17);
	for(int k : nums){ //output : 19 12 -1 -1 15 17 
	    cout<<k<<" ";
	}
	cout<<endl;
	
	
	
	
	vector<int> nums2;
//	nums2[1]=16; //give error
	nums2.push_back(12);
	nums2.push_back(14);
	for(int k : nums2){ //output : 12 14 
	    cout<<k<<" ";
	}
	cout<<endl;
	
	
	
	vector<int> nums3(4);
	nums3[0]=13;
	nums3[1]=10;
	nums3.push_back(13);
	nums3.push_back(10);
		for(int k : nums3){//output : 13 10 0 0 13 10 
	    cout<<k<<" ";
	}
	cout<<endl;






	vector<int> vec; // size zero vector 
	vector<int> vec2={1,3,2}; //size 3 vector 
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3); // it will increase the size of vector 
	vec.push_back(4);
	vec.push_back(5);
	vec.emplace_back(6); //it also add 6 in vector 
	vec.emplace_back(7);
	/*for(int i : vec){
	    cout<<i<<" ";
	}
	cout<<"\n";*/
	cout<<vec[3]<<"\n"; //give 3rd element of vector 
	cout<<vec.front()<<"\n"; //give first element
	cout<<vec.back()<<"\n";  //give last element
	
	vector <int> vec3(10,-1); //create a vector of length 10 with every element -1 
	vector<int> vec4(vec); //create copy of vec in vec2 
	
	/*for(int i : vec4){
	    cout<<i<<" ";
	}
	cout<<"\n";*/
	
//	vec.erase(vec.begin());//erase first element 
//	vec.erase(vec.begin()+2);//erase third element
// Erase function cange the size but not capacity of vector 
	for(int i : vec){
	    cout<<i<<" ";
	}
	cout<<"\n";
	/*
	vec.erase(vec.begin()+1, vec.begin()+4); //erase 2nd 3rd and 4th element
	for(int i : vec){
	    cout<<i<<" ";
	}
	cout<<"\n";
	
	vec.insert(vec.begin()+2, 100); //insert 100 at 3rd place and push element to further in vector 
	for(int i : vec){
	    cout<<i<<" ";
	}
	cout<<"\n";
	cout<<"is empty : "<<vec.empty()<<"\n"; //give 1 for true or 0 for false..
     */
     
     
     
    /*
	vec.clear(); //clear the vector. size becomes zero but does not chnage the capacity
	for(int i : vec){//does not print anything 
	    cout<<i<<" ";
	}
	cout<<"\n";
	cout<<vec.size()<<"\n"; // give zero
	cout<<vec.capacity()<<"\n"; // does not change give value 8
	cout<<"is empty : "<<vec.empty()<<"\n"; //give 1 for true or 0 for false..
	
	*/
	
	cout<<"vec.begin : "<<*(vec.begin())<<"\n"; //give 1 
	cout<<"vec.end : "<<*(vec.end())<<endl; //give zero as it point next to last element
	
	
}
