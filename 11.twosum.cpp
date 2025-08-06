#include <bits/stdc++.h>
using namespace std;

//teo sum problem
int partition(vector<int>& arr, int low, int high) {
  
    // Choose the pivot
    int pivot = arr[high];
  
    // Index of smaller element and indicates 
    // the right position of pivot found so far
    int i = low - 1;

    // Traverse arr[low..high] and move all smaller
    // elements on left side. Elements from low to 
    // i are smaller after every iteration
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // Move pivot after smaller elements and
    // return its position
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}

// The QuickSort function implementation
void quickSort(vector<int>& arr, int low, int high) {
  
    if (low < high) {
      
        // pi is the partition return index of pivot
        int pi = partition(arr, low, high);

        // Recursion calls for smaller elements
        // and greater or equals elements
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}




vector<int> twoSum(vector<int> nums, int targetSum){
    quickSort(nums,0,nums.size());
    int n= nums.size();
    int i=0,j=n-1;
    vector<int> idx;
    while(i<=j){
        if(nums[i]+nums[j]>targetSum){
            j--;
        }
        else if(nums[i]+nums[j]<targetSum){
            i++;
        }
        else{
           // cout<<nums[i]<<" "<<nums[j]<<"\n";
           idx.push_back(i);
           idx.push_back(j);
            break;
        }
    }
    return idx;
    
}
int main() {
	// your code goes here
	vector<int> nums={2,7,11,18,19,13};
	int targetSum = 24;
	vector<int> idx = {0,0}; 
	idx = twoSum(nums, targetSum);
   // cout<<"Rajkishor Ranjan"<<endl;
	cout<<idx[0]<<" "<<idx[1]<<"\n";

}
