#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//Next greater element with O(n) time complexity
/*	vector<int> nums={6,8,0,1,3};
	stack<int> s;
	vector<int> ans(nums.size());
	for(int i=nums.size()-1;i>=0;i--){
	    while(s.size()>0 && s.top()<nums[i]){
	        s.pop();
	    }
	    if(s.size()==0){
	        ans[i]=-1;
	    }else{
	        ans[i]=s.top();
	    }
	    s.push(nums[i]);
	    
	}
	
	for(int i=0;i<=ans.size()-1;i++){
	    cout<<ans[i]<<" ";
	}
	cout<<endl;*/
	
	
	//previous smaller element with O(n) time complexity
	vector<int> nums={3,1,1,0,8,6};
	stack<int> s;
	vector<int> ans;
	for(int i=0;i<nums.size();i++){
	    while(s.size()>0 && s.top()>=nums[i]){
	        s.pop();
	    }
	    if(s.size()==0){
	        ans.push_back(-1);
	    }else{
	        ans.push_back(s.top());
	    }
	    s.push(nums[i]);
	    
	}
	
	for(int i=0;i<=ans.size()-1;i++){
	    cout<<ans[i]<<" ";
	}
	cout<<endl;
	
	return 0;

}
