#include <bits/stdc++.h>
using namespace std;
 int min_mult(vector<int> &arr, int i, int j, vector<vector<int>> &memo){
        if(i+1==j) return 0;
        if(memo[i][j]!=-1) return memo[i][j];
        int res =INT_MAX;
        for(int k=i+1; k<j;k++){
            int cost= min_mult(arr, i, k, memo)+min_mult(arr, k, j, memo)+arr[i]*arr[k]*arr[j];
            res=min(cost, res);
            
        }
        memo[i][j]=res;
        return memo[i][j];
    }
  
  
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n= arr.size();
        vector<vector<int>> memo(n, vector<int>(n,-1));
        return min_mult(arr, 0, n-1, memo);
    }
    
int main() {
    // your code goes here
    vector<int> arr={10,30,5,60};
    cout<<matrixMultiplication(arr)<<endl;

}
