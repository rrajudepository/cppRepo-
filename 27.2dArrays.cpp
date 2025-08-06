#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int matrix[][3], int rows, int columns, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns; j++){
            if(matrix[i][j]==key) 
            return true;
        }
    }
    return false;
}
void isNumberFound(int matrix[][3], int rows, int columns, int key){
    pair<int, int> p={-1,-1};
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns; j++){
            if(matrix[i][j]==key){
                p.first=i+1;
                p.second=j+1;
               // return p;
                break;
            }
        }
    }
    if(p.first!=-1 && p.second!=-1){
	    cout<<"Number found at index ("<<p.first<<","<<p.second<<")\n";
	}else{
	    cout<<"Number not found\n";
	}
    //return p;
}

int main() {
	// your code goes here
	int matrix[4][3];
	for(int i=0;i<4;i++){
	    for(int j=0;j<3;j++){
	        cin>>matrix[i][j];
	    }
	}
	int key;
	cin>>key;
	/*for(int i=0;i<4;i++){
	    for(int j=0;j<3;j++){
	        cout<<matrix[i][j]<<" ";
	    }
	    cout<<"\n";
	}*/
	/*if(linearSearch(matrix, 4,3,key)){
	    cout<<"found\n";
	}else{
	    cout<<"Not Found\n";
	}*/
	
	//pair<int, int> p=isNumberFound(matrix, 4,3, key);
	/*if(p.first!=-1 && p.second!=-1){
	    cout<<"Number found at index"<<p.first<<" "<<p.second<<"\n";
	}else{
	    cout<<"Number not found\n";
	}*/
	
	isNumberFound(matrix, 4,3, key);

}
