#include <bits/stdc++.h>
using namespace std;
//single number leetcode problem

int singleNumber(vector<int>& nums) {
        int j=0;
        for(int i:nums){
            j=j^i; //Xor operation

        }
        return j;
        
    }
int main() {
	// your code goes here
	vector <int> vec={1,1,2,3,2,4,5,4,5,6,7,6,3};
	cout<<singleNumber(vec)<<" \n";
	

}
