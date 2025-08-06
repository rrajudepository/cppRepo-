#include <bits/stdc++.h>
using namespace std;

//O(n^2) time complexity
 int partition(vector<int> &arr, int start, int end){
        int idx =start-1, pivot=arr[end];
        for(int j=start; j<end;j++){
            if(arr[j]<=pivot){
                idx++;
                //cout<<arr[j]<<" "<<arr[idx]<<endl;
                swap(arr[j], arr[idx]);
            }
        }
    
       /* for(int i : arr){
        cout<<i<<" ";
        }
        cout<<endl;
        cout<<idx<<endl;*/
        idx++;
       // cout<<arr[end]<<" "<<arr[idx]<<endl;
        swap(arr[end], arr[idx]);
       // cout<<arr[end]<<" "<<arr[idx]<<endl;
        /*for(int i : arr){
        cout<<i<<" ";
        }
        cout<<endl;*/
        return idx;
    }
    void quickSort(vector<int> &arr,int start, int end){
        if(start<end){
            int pivot=partition(arr, start, end);
            quickSort(arr, start, pivot-1); //left sort
            quickSort(arr, pivot+1, end);  // right sort
        }
        return;
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0,nums.size()-1);
        return nums;
    }

int main() {
    // your code goes here
    vector<int> nums={5,2,7,6,4,0,9,8,3};
    sortArray(nums);
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    int a=5,b=6;
    swap(a,b);
    //cout<<a<<" "<<b<<endl;

}
