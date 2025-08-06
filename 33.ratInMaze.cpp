#include <bits/stdc++.h>
using namespace std;
//must see this again
void path_Count(vector<vector<int>> &maze, vector<string> &path, string direction, int r, int c, vector<vector<bool>> &visit){
        int n=maze.size();
        if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0 || visit[r][c]==true){
            return;
        }
        if(r==n-1 && c==n-1){
            cout<<"Rajksihor5\n";
            path.push_back(direction);
            return;
        }
        
        
        visit[r][c]=true;

        //Down Move
        //cout<<"Rajksihor4 "<<r+1<<" "<<c<<endl;
        path_Count(maze, path, direction+"D",r+1, c, visit );
         //Up Move
        //cout<<"Rajksihor3 "<<r-1<<" "<<c<<endl;
        path_Count(maze, path, direction+"U",r-1, c, visit );
        //left Move
        //cout<<"Rajksihor2 "<<r<<" "<<c-1<<endl;
        path_Count(maze, path, direction+"L",r, c-1, visit );
        //Right Move
        //cout<<"Rajksihor1 "<<r<<" "<<c+1<<endl;
        path_Count(maze, path, direction+"R",r, c+1, visit );
        
        visit[r][c]= false;
        
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
	//vector<vector<int>> maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
	vector<vector<int>> maze={{1,1,0},{0,1,1},{1,1,1}};
	
	ratInMaze(maze);
	

}
