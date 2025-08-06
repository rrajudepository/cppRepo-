//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

//Vectors(Dynamic in nature) ->not fixed size 
int main() {
	// your code goes here 
	//vector<int> vec; //create vector of size 0.
	/*
    vector<int> vec = {1,2,3};
	cout<<vec[0]<<" ";
	cout<<vec[1]<<" ";
	cout<<vec[2]<<" \n";
	
	vector<int> vec2(5,0); //size 5 with all value 0.
	cout<<vec2[0]<<" ";
	cout<<vec2[1]<<" ";
	cout<<vec2[2]<<" ";
	cout<<vec2[3]<<" ";
	cout<<vec2[4]<<" \n";
	
	for(int i : vec2){ //print all value of vector 
	    cout<<i<<" ";
	}
	cout<<"\n";
    
    vector<int> product(6,1); // Size 6 and every element is 1 
	for(int i : product){
	    cout<<i<<" ";
	}




	
    vector<char> str={'a','b','c','d','e','f'};
    for(char i : str){
        cout<< i<<" ";
    }
    cout<<"\n";
    
    
    //Vector function
    
    cout<<str.size()<<" \n"; //Give size of vector 
    str.push_back('q'); //add 'q' at the end of vector
    str.push_back('b');
    for(char i : str){
        cout<< i<<" ";
    }
    
    cout<<" \n";
    
    str.pop_back(); // delete last value
    for(char i : str){
        cout<< i<<" ";
    }
    cout<<"\n";
    
    char ch = str.front(); //give the first value of vector
    char ch2 = str.back(); //give the last value
    char ch3 =str.at(3); //give value at index 3.
    cout<<ch<<" "<<ch2<<" "<<ch3<<" \n";

    */
     vector<int> nums = {1,2,3,4,5};
     int sum = accumulate(nums.begin(), nums.end(), 0); 

     cout<<sum<<endl;
     vector<vector<int>> nums2 ={{3,1},{2,5},{0,4},{1,6},{1,5},{2,4}};
     sort(nums2.begin(), nums2.end()); //sort the vector accoriding to first element and if first element are same and then sort them accoriding to second element
     for(auto k : nums2){
        cout<<k[0]<<":"<<k[1]<<endl;
     }
      string s ="Rajkishor";
      int sum2=0;
      cout<<int(s[0])<<":"<<int(s[1])<<":"<<int(s[2])<<endl;
      for(int i=0;i<s.size();i++){
         sum2 += s[i];
        cout<<sum2<<" ";
      }
      cout<<endl;
      
    
	return 0;

}
