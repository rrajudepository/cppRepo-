#include <bits/stdc++.h>
using namespace std;
//must see this again
void path_Count(vector<vector<int>> &maze, vector<string> &path, string direction, int r, int c, vector<vector<bool>> &visit){
        int n=maze.size();
        
        if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0 || visit[r][c]==true){
            cout<<" Return\n";
            return;
        }
        //cout<<visit[r][c]<<"\n";
        if(r==n-1 && c==n-1){
            cout<<"Storing path\n";
            path.push_back(direction);
            return;
        }
        
        
       // visit[r][c]=true;
       maze[r][c]=0;

        //Down Move
        cout<<"DOWN "<<r+1<<" "<<c<<endl;
        path_Count(maze, path, direction+"D",r+1, c, visit );
         //Up Move
        cout<<"UP "<<r-1<<" "<<c<<endl;
        path_Count(maze, path, direction+"U",r-1, c, visit );
        //left Move
        cout<<"LEFT "<<r<<" "<<c-1<<endl;
        path_Count(maze, path, direction+"L",r, c-1, visit );
        //Right Move
        cout<<"RIGHT "<<r<<" "<<c+1<<endl;
        path_Count(maze, path, direction+"R",r, c+1, visit );
        
        //visit[r][c]=false;
        maze[r][c]=1;
        
        return;
        
    }
  
  
    void ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> path;
        int n=maze.size();
        vector<vector<bool>> visit(n, vector<bool>(n, false));
        string direction="";
        path_Count(maze, path, direction, 0,0, visit);
        
        for(auto i : path){
            cout<<i<<endl;
        }
    }


int main() {
	// your code goes here
	vector<vector<int>> maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
	//vector<vector<int>> maze={{1,1,0},{0,1,1},{1,1,1}};
	
	ratInMaze(maze);
	

}
