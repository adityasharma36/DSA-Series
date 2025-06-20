#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isPossible(vector<vector<int>>&maze,vector<vector<bool>>&isVisted,int row,int col,int n){
    if(row<0 || col<0 || row>=n || col>=n){
        return false;
    }
    if(isVisted[row][col]==true){
        return false;
    }
    if(maze[row][col]==0){
        return false;
    }
    return true;
}
void solve( vector<vector<int>>&maze, vector<vector<bool>>&isVisted,int n,int scrX,int scrY,int destX,int destY,vector<string>&arr,string output){
    if(scrX== destX && scrY == destY){
        arr.push_back(output);
        return;
    }
    // UP
    int row = scrX-1;
    int col = scrY;
    if(isPossible(maze,isVisted,row,col,n)){
        isVisted[row][col]= true;
        solve(maze,isVisted,n,row,col,destX,destY,arr,output + "U");
        isVisted[row][col]= false;
    }
    // Down
    row = scrX+1;
    col = scrY;
    if(isPossible(maze,isVisted,row,col,n)){
        isVisted[row][col]= true;
        solve(maze,isVisted,n,row,col,destX,destY,arr,output + "D");
        isVisted[row][col]= false;
    }
    // left
    row = scrX;
    col = scrY-1;
    if(isPossible(maze,isVisted,row,col,n)){
        isVisted[row][col]= true;
        solve(maze,isVisted,n,row,col,destX,destY,arr,output + "L");
        isVisted[row][col]= false;
    }
    // right
    row = scrX;
    col = scrY+1;
    if(isPossible(maze,isVisted,row,col,n)){
        isVisted[row][col]= true;
        solve(maze,isVisted,n,row,col,destX,destY,arr,output + "R");
        isVisted[row][col]= false;
    }
}
int main(){
    vector<vector<int>>maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n = 4;
    vector<vector<bool > >isVisted( n , vector<bool>(n,0));
    vector<string> arr;
    string output = "";
    isVisted[0][0]= true;
    int srcX = 0;
    int srcY = 0;
    int destX = n-1;
    int destY = n-1;

    if(maze[srcX][srcY]==0) cout<< "not possible "<<endl;

    solve(maze,isVisted,n,srcX,srcY,destX,destY,arr,output);
    for(string path : arr) {
    cout << path << endl;
}



}
