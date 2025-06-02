#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int findMin(vector<int> arr,int start,int end ,int & mini){
    if(start>end){
        return mini;
    }
    mini = mini>arr[start] ? arr[start]:mini;
    return findMin(arr,start+1,end,mini);
}
int main(){
    vector<int> arr = {1,2,3,5,9,0,4};
    int start = 0;
    int end = arr.size()-1;
    int mini = INT_MAX;
     cout<<findMin(arr,start,end,mini)<<endl;

}