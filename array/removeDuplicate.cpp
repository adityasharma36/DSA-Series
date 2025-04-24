#include<iostream>
#include<vector>
using namespace std;
// optimise solution 

int removeDuplicate(vector<int>& arr,int & j){
    for(int i = 0;i<arr.size();i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]= arr[i];
        }
    }
    for(int i = 0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int j = 0;
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    removeDuplicate(arr,j);
}