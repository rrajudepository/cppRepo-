#include <bits/stdc++.h>
using namespace std;

//Recursive search 
int binarySearch3(vector<int> arr, int start, int end, int search){
    cout<<start<<" "<<end<<"\n";
    if(start<=end){
        int mid=start+(end-start)/2; ////use this to skip overflow incase of large integer start and end 
        if(arr[mid]>search){
            return binarySearch3(arr, start, mid-1, search);
        }
        else if(arr[mid]<search){
            //cout<<start<<" "<<end<<"\n";
            return binarySearch3(arr, mid+1, end, search);
        }
        else 
        return mid;
    }
    return -1;
    
}

//time complexity O(logn) and space complexity O(logn)
int binarySearch(vector<int> arr, int start, int end, int search){
   // int mid = (start+end)/2;
   
   int mid=start+(end-start)/2; //use this to skip overflow 
    if(arr[mid]==search) return mid; //base case
    else if(arr[mid]>search){
        return binarySearch(arr, start, mid-1, search);
    }
    else{
        //cout<<mid<<endl;
        return binarySearch(arr,mid+1, end, search);
        
    }
    return -1;
}

//Search by loop 
//time complexity O(logn) and space complexity O(1)
int binarySearch2(vector<int> arr, int start, int end, int search){
    int mid;
    while(start<=end){
        //mid=(start+end)/2;
        
        mid=start+(end-start)/2; //use this to skip overflow 
        if(arr[mid]>search){
            end= mid-1;
        }
        else if(arr[mid]<search){
            start= mid+1;
        }
        else return mid;
    }
    /*while(arr[mid]!=search){
        if(arr[mid]>search && start!=end){
            end =mid-1;
        }
        else{
            start= mid+1;
        }
        mid=(start+end)/2;
        
    }*/
    
    return -1;
}

int main() {
	// your code goes here
    vector<int> arr={-5,-3,-1,0,3,6,7,10,11};
	int searchElement;
	cin>>searchElement;
	cout<<binarySearch3(arr,0, arr.size()-1, searchElement)<<endl;
	//cout<<arr.size()<<endl;

}
