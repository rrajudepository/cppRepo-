#include <bits/stdc++.h>
using namespace std;
//2d vector 
int main() {
	// your code goes here
	vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
	//rows= mat.size()
	//column = mat[i].size()
	
	for(int i=0;i<mat.size();i++){
	    for(int j=0;j<mat[i].size();j++){
	        cout<<mat[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	
	//rows and columns size would be different for different rows and columns
	
	vector<vector<int>> mat2={{1,2,3,10,12,11},{4,5,6},{7,8,9,-10}};
	
	
	for(int i=0;i<mat2.size();i++){
	    for(int j=0;j<mat2[i].size();j++){
	        cout<<mat2[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	
}
