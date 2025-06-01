#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int findMax(vector<int> arr,int start,int end ,int &maxes){
    if(start>end){
        return maxes;
    }
    maxes = arr[start]>maxes ? arr[start]:maxes;
    return findMax(arr,start+1,end,maxes);
}
int main(){
    int maxes = INT_MIN;
    vector<int> arr = {1,2,3,5,6,12,5,4};
    int start = 0;
    int end = arr.size()-1;
    cout<<findMax(arr,start,end,maxes);
}