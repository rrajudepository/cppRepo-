#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        /*sort(nums.begin(), nums.end());
        int majority=nums[0];
        int freq=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                freq++;
                majority=nums[i];
            }
            else{
                freq=1;
                majority=nums[i];
            }
            if(freq>nums.size()/2){
                break;
              //  return majority;
            }
        }
      return majority;*/
      
      
      //Moore's voting algorithm 
      int freq=1;
      int majority = nums[0];
      for(int i=1;i<nums.size();i++){
          if(freq==0){
              majority = nums[i];
          }

          if(nums[i]==majority){
              freq++;
          }
          else{
              freq--;
          }
          
      }
      
      return majority;
        
    }
int main() {
	// your code goes here
	//vector<int> nums={1,1,2,2,1,1,3,2,2,2,2,3,3,3,3,3};
	vector<int> nums={3,2,3};
	int majority = majorityElement(nums);
	cout<<majority<<"\n";

}
