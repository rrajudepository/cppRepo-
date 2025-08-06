#include <bits/stdc++.h>
using namespace std;
void Sort(vector<int> &nums){
 int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                
                    swap(nums[mid], nums[low]);
                   /* int j=nums[mid];
                     nums[mid]=nums[low];
                     nums[low]=j;*/
                     mid++;
                    low++;
                    

               
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                /*int j=nums[high];
                nums[high]=2;
                nums[mid]=j;*/
                high--;

            }

        }
        
        cout<<"[ ";
        for(int i:nums){
            cout<<i<<", ";
        }
        cout<<"]\n";
}
int main() {
	// your code goes here
	
	//Inbuild sorting algorithm 
	/*vector<int> nums={3,4,5,6,2,1,9,7,8};
	sort(nums.begin(),nums.end()); //use O(nlogn) time to sort vector nums
	for(int i : nums){
	    cout<<i<<" ";
	}
	cout<<"\n";*/
	
	vector<int> nums={2,0,2,1,1,0};
	Sort(nums);

}
