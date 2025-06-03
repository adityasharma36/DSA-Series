#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int findMinimumStep(vector<int> array,int target){
    if(target==0){
        return 0;
    }
    if(target <0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i = 0;i<array.size();i++){
        int ans = findMinimumStep(array,target-array[i]);
        if(ans!=INT_MAX){
        mini = min(mini,ans+1);
    }
    }
    return mini;

}
int main(){
    vector<int> array = {1,2,3};
    int target = 5;
    cout<<findMinimumStep(array,target);
}