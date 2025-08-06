#include <bits/stdc++.h>
using namespace std;
//time complexity O(nlogn)

bool isValid(vector<int> &arr, int n, int m , int maxAllowedPages){
    int student=1, pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages){
            return false;
        }
        if(pages+arr[i]<=maxAllowedPages){
            pages+=arr[i];
        } else {
            student++;
            pages=arr[i];
        }
    }
    return student>m? false:true;
}

int allocateBooks(vector<int> &arr, int n , int m){
    int sum=0;
    for(int i: arr){
        sum=sum+arr[i];
    }
    int ans=-1;
    int start=0, end=sum;
    while(start<=end){
        int mid = start+(end-start)/2;
        
        if(isValid(arr, n,m,mid)){ //move left
            ans=mid;
            end=mid-1;
        } else{ //move right
            start=mid+1;
        }
    }
    return ans;
}
int main() {
	// your code goes here
	vector<int> arr={2,1,3,4};
	int n=4,m=5;
	cout<<allocateBooks(arr,n,m)<<"\n";
	return 0;

}
