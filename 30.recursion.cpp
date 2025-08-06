#include <bits/stdc++.h>
using namespace std;

vector<int> nthfib(31,-1);
    int fib(int n) {
        if(n==1 || n==0){
            return n;
        }
        if(nthfib[n]!=-1){
            return nthfib[n];

        }else{
            nthfib[n]=fib(n-1)+fib(n-2);
        }
        return nthfib[n];
    }

void print1toN(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    
    print1toN(n-1);
     cout<<n<<" ";
     return;
}

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int fact = n*factorial(n-1);
    return fact;
}

bool isSorted(vector<int> nums, int k){
    if(k==nums.size()-1){
        return true;
    }
    if(nums[k]<nums[k+1]){
        return isSorted(nums, k+1);
    }else{
        return false; 
    }
}

bool BinarySearch(vector<int> nums, int start, int end, int target){
    if(start>end){
        return false;
    }
    int mid=start+(end-start)/2;
    if(nums[mid]==target){
        return true;
    }else if(nums[mid]>target){
        end=mid-1;
        return BinarySearch(nums, start, end, target);
    }else{
        start = mid+1;
        return BinarySearch(nums, start, end, target);
    }
    //return false;
}

int main() {
	// your code goes here
	//print1toN(20);
	cout<<factorial(5)<<endl;
	
	cout<<fib(10)<<endl;
	vector<int> nums={1,2,3,4,8,6,9,10};
	if(isSorted(nums, 1))
	  cout<<"Yes Sorted array\n";
	else
	  cout<<"Not Sorted\n";
	  
	vector<int> nums2={-5,-2,0,3,4,10,12,15,19,20};
	if(BinarySearch(nums2,0,nums2.size()-1, 0)){
	    cout<<"Found\n";
	}else{
	    cout<<"Not Found\n";
	}
	

}
