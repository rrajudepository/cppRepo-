#include <iostream>
#include <cstring>
#include <string> 

using namespace std;

int main() {
	// your code goes here
	//character arrays or c strings
	
	/*
	char str[] = {'a','b','c','\0'};
	cout<<str<<endl; 
	int len=strlen(str); //ignore null character in size
	cout<<len<<endl;
	
	char str2[]="IIT PATNA";
	cout<<str2<<endl;
	
	char str3[100];
//	cin>>str3; //Only take input Rajkishor and ignore the character after space 
//	cout<<str3<<endl;
	
	cin.getline(str3, 100);// take input a string of length upto 100 size 
	cout<<str3<<endl; 
	
	cin.getline(str3, 100, '$'); // take size upto 100 length of string and do not take input strings come after $ sign 
	cout<<str3<<endl;
	
	
	for(char ch : str3){
	    cout<<ch<<" ";
	}
	cout<<endl;
	
	char str4[]="APANA COLLEGE";
	int len2=0;
	for(int i=0;str4[i]!='\0';i++){
	    len2++;
	}
	
	cout<<"LENGTH OF STRING IS "<<len2<<"\n";
	
	*/
	
	
	//Strings in C++
	// Strings are dynamic in nature
	
	string str ="apna college";
	cout<<str<<endl;
	
	str="hello world";
	cout<<str<<endl;
	string str2 =" Shradha";
	string str3 =str+str2;
	cout<<str3<<endl;
	
	cout<<(str2 == str3)<<endl; //check both strings are same or not 
	cout<<str3.length()<<endl; // length of string 
	
	string str4;
	//cin>>str4; //do not take input after space 
	//cout<<str4<<endl; 
	
	getline(cin, str4);
	cout<<str4<<endl;
	//print character of str4 by two ways 
	for(int i =0;i<str4.length();i++){
	    cout<<str4[i]<<" ";
	}
	cout<<endl;
	
	for(char ch : str4){
	    cout<<ch<<" ";
	}
	cout<<endl;
	
	
	//Reverse a String 
	string str5 ="apna college";
//	reverse(str5.begin(), str5.end());
    int start =0, end=str5.size()-1;
    while(start<=end){
        swap(str5[start], str5[end]);
        start++;
        end--;
    }
    cout<<str5<<endl;

    int count =20;
	string s3= to_string(count); //convert the integer into string;
	cout<<s3<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	

}
