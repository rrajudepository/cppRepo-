#include <bits/stdc++.h>
using namespace std;
//find min and max value of an array 

//Note : array always pass by refeerence in function

void changeArray(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*2;
    }
}

void changeArray2(int *arr, int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*2;
    }
}




int main() {
	// your code goes here
	/*int nums[]={10,12,13,19,-14,-89,921,-900};
	int min=INT_MAX;\
	int size = 8;
	for(int i=0;i<size;i++){
	    if(nums[i]<min)
	    min= nums[i];
	    
	}
	cout<<"Min value is "<<min<<"\n";
	int max =INT_MIN;
	for(int i=0;i<size;i++){
	    if(nums[i]>max)
	    max= nums[i];
	    
	}
	cout<<"Maximum value is "<<max<<"\n";
	cout<<INT_MIN<<" "<<INT_MAX<<"\n";*/
	
	
	//Change the array by function
	
	int arr[]={10,12,13,19,-14,-89,921,-900};
	//changeArray(arr,8); //chnage the value of array
	/*for(int i=0;i<8;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<"\n";*/ 
	
	changeArray2(arr,8); //it also change the value of array 
		for(int i=0;i<8;i++){
	    cout<<arr[i]<<" ";
	}
	
	cout<<"\n";
 return 0;
}
