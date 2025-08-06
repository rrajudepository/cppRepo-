#include <bits/stdc++.h>
using namespace std;
//Linear search
void LinearSearch(int *arr, int n,int find){
    int search =-1;
    for(int i=0;i<n;i++){
        if(find==arr[i]){
            cout<<"Element is available in array \n";
            search =0;
        }
    }
    if(search==-1)
    cout<<"Element is not available\n";
}

void reverseArray(int *arr, int n){
    int i=0;
    int j=n-1;
    while(i<j){
        /*int k=arr[i];
        arr[i]=arr[j];
        arr[j]=k;*/
        //OR 
        arr[i]=arr[i]-arr[j];
        arr[j]=arr[i]+arr[j];
        arr[i]=arr[j]-arr[i];
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {
	// your code goes here
	int arr[]={4,2,7,8,1,2,5};
	int find = 8;
	int search =-1;
	/*
	for(int i=0;i<7;i++){
	    if(find==arr[i])
	    cout<<"Element available"<<"\n";
	    search=0;
	}
	if(search ==-1){
	    cout<<"Element not available\n";
	}*/
	
	//LinearSearch(arr,7,90);
	reverseArray(arr,7);

}
