#include <bits/stdc++.h>
using namespace std;

//Pattern problem

int main() {
	// your code goes here
	/*
	char ch;
	for(int i=0;i<4;i++){
	    ch='A';
	    for(int j=0;j<4;j++){
	        cout<<ch<<" ";
	        ch=ch+1;
	    }
	    cout<<"\n";
	}*/
	/*
	char ch='A';
	int num=1;
	for(int i=0;i<4;i++){
	    for(int j=0;j<4;j++){
	        cout<<num<<" "<<ch<<" ";
	        ch+=1;
	        num++;
	    }
	    cout<<"\n";
	   
	}*/
	
	/*
	int n=1;
	for(int i=0;i<10;i++){
	    for(int j=0;j<=i;j++){
	        cout<<"*";
	    }
	    cout<<"\n";
	    //n++;
	}
	*/
	/*
	int n=1;
	for(int i=0;i<4;i++){
	    for(int j=0;j<=i;j++){
	        cout<<n<<" ";
	    }
	    n++;
	    cout<<"\n";
	}
	*/
	/*
	for(int i=0;i<4;i++){
	    int n=i+1;
	    for(int j=0;j<=i;j++){
	        cout<<n--<<" ";
	    }
	    cout<<"\n";
	}
	int num=1;
	for(int i=0;i<4;i++){
	    for(int j=0;j<=i;j++){
	        cout<<num++<<" ";
	    }
	    cout<<"\n";
	}
	char ch='A';
	for(int i=0;i<4;i++){
	    for(int j=0;j<=i;j++){
	        cout<<ch<<" ";
	        ch=ch+1;
	    }
	    cout<<"\n";
	}
	
	*/
	
	
/*	for(int i=4;i>=1;i--){
	    for(int j=i;j>0;j--){
	        cout<<i<<" ";
	    }
	    cout<<"\n";
	}*/
	/*
	for(int i=1;i<=4;i++){
	    for(int j=4;j>=i;j--){
	        cout<<i<<" ";
	    }
	    cout<<"\n";
	}*/
	
	/*
	int n=10;
	for(int i=0;i<n;i++){
	    //spaces : n-i-1
	    for(int j=0;j<n-i-1;j++){
	        cout<<" ";
	    }
	    //nums1 : i+1
	    for(int j=1;j<=i+1;j++){
	        cout<<j;
	    }
	    for(int j=i;j>0;j--){
	        cout<<j;
	    }
	    cout<<"\n";
	}*/
	
	
	int n=10;
	for(int i=0;i<n;i++){
	    //spaces
	    for(int j=0;j<n-i-1;j++){
	        cout<<" ";
	    }
	    cout<<"*";
	    if(i!=0){
	        //spaces
	    for(int j=0;j<2*i-1;j++){
	        cout<<" ";
	    }
	    cout<<"*";
	    }
	    cout<<"\n";
	    
	  }
	  
	  
	
	
	
	
	return 0;

}
