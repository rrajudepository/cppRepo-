#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	/*
	char ch;
	cout<<"Enter the character\n";
	cin>>ch;
	if(ch>=65 && ch<=90){
	    cout<<"Upper Case letter";
	}
	else if(ch>=97 && ch<=123){
	    cout<<"lower Case letter";
	}
	else{
	    cout<<"Not upper or lower letter";
	}

	
	int n=45;
	//(n>=45? (cout<<"YES\n"):(cout<<"No\n"));
	cout<<(n>=45? "Yes" : "No");
	
	*/
	//check a number is prime or not
	int n;
	cin>>n;
	int i;
	/*for( i=2;i<n;i++){
	    if(n%i==0){
	        cout<<"Non Prime number\n";
	        break;
	    }
	}
	if(i>=n){
	    cout<<"Prime number \n";
	}*/
	
	//or
	
	/*
	bool IsPrime =true;
	for( i=2;i<n;i++){
	    if(n%i==0){
	        IsPrime = false;
	        break;
	    }
	}
	if(IsPrime){
	    cout<<"Prime number \n";
	}
	else{
	    cout<<"Not Prime\n";
	}*/
	
	bool IsPrime =true;
	for( i=2;i*i<n;i++){
	    if(n%i==0){
	        IsPrime = false;
	        break;
	    }
	}
	if(IsPrime){
	    cout<<"Prime number \n";
	}
	else{
	    cout<<"Not Prime\n";
	    cout<<"First factor is" <<" "<< i; 
	}
	
	
	
   	return 0;
}
