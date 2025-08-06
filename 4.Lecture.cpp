#include <bits/stdc++.h>
using namespace std;

int change(int a, int b){
     a=a+4;
     b=b+6;
    return a+b;
    
}

//calculate sum of digits
int digitSum(int num){
    int digit=0;
    while(num>0){
        digit=digit+num%10;
        num =num/10;
    }
    return digit;
}

//Calculate nCr

int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    } 
    return fact;
}
//Calculate first n prime numbers (Check this question)
void PrimeNumber(int n){
    bool arr[n]={true};
    for(int i=2;i*i<=n;i++){
        int k=2;
        for(int j=i;j<n;j=j*k,k++){
            if(arr[j]==true){
                arr[j]=false;
            }
        }
    }
    
    cout<<"List of first n prime numbers are : \n";
    for(int i=2;i<n;i++){
        if(arr[i]==true){
            cout<<i<<" ";
        }
    }
}

int main() {
	// your code goes here
	//cout<<"Min value is " <<min(19,18)<<" \n";
	/*int a=10, b=20;
	int sum=change(a,b);
	cout<<a<<" "<<b<<" "<<sum<<"\n";*/
	/*
	int num ;
	cin>>num;
	cout<<"Digit sum is : "<<digitSum(num)<<"\n";*/
	
	/*
	int n,r;
	cout<<"Enter value of n and r(n>r)\n";
	cin>>n;
	cin>>r;
	int nCr = fact(n)/(fact(n-r)*fact(r));
	cout<<"Value of nCr is "<<nCr<<"\n";
	
	*/
	
	int num=100;
	PrimeNumber(num);
	


  return 0;	
	

}
