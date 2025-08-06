#include <bits/stdc++.h>
using namespace std;
vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        vector<int> ans(arr.size(),0);
        stack<int> s;
        for(int i=0;i<arr.size();i++){
            while(s.size()>0 && arr[s.top()]<=arr[i]){
                s.pop();
            }
            
            if(s.empty()){
                ans[i]=i+1;
            }else{
                ans[i]=i-s.top();
            }
            s.push(i);
        }
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return ans;
        
    }
int main() {
	// your code goes here
	vector<int> arr={100,80,60,70,60,75,85,85};
	calculateSpan(arr);

}
