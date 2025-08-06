#include <bits/stdc++.h>
#include <vector>
using namespace std;
//Kadane's Algorithm (Max sum subarray)
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int max_sum(vector<int> nums){
    int maxSum = INT_MIN;
    int currentSum=0;
    /*for(int i :nums){
        cout<<i<<" ";
    }
    cout<<"\n";*/
    for(int i : nums){
        currentSum =currentSum+i;
        maxSum= max(currentSum, maxSum);
        if(currentSum<0){
            currentSum=0;
        }
        cout<<currentSum<<" "<<maxSum<<" \n";
    }
    return maxSum;
}
int main() {
	// your code goes here
	vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
	cout<<max_sum(nums)<<"\n";
	/*for(int i :nums){
        cout<<nums[i]<<" ";
    }*/
    //cout<<"\n";
	//cout<<max(30,20)<<"\n";

}
