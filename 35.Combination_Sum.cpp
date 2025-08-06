#include <bits/stdc++.h>
using namespace std;

set<vector<int>> s;
    void com_Sum(vector<int> &arr,int idx, vector<int> &comb, vector<vector<int>> &ans, int target){
        cout<<target<<" "<<idx<<" "<<arr.size()<<endl;
        if(target ==0){
            cout<<"Value of target "<<target<<endl;
            if(s.find(comb)==s.end()){
                s.insert(comb);
                ans.push_back(comb);
            }
            return;
        }
        if(target<0 || idx>=arr.size()){
            cout<<"Returning\n";
            return;
        }

        //cout<<"Single time inclusion";
        comb.push_back(arr[idx]);
        com_Sum(arr, idx+1, comb, ans, target-arr[idx]); //single time inclusion
        com_Sum(arr, idx, comb, ans, target-arr[idx]); //multi time inclusion
        comb.pop_back();
        com_Sum(arr, idx+1, comb, ans, target);
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        vector<vector<int>> ans;
        com_Sum(candidates, 0, comb, ans, target);
        for(auto i : ans){
            for(auto j : i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        return ans;
        
    }

int main() {
	// your code goes here
	vector<int> candidates={2,3,5};
	int target=8;
	combinationSum(candidates, target);

}
