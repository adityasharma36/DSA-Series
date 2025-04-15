#include<iostream>
#include<vector>
using namespace std;
int applyOperation(vector<int> & arr){
    int start = 0;
    for(int i =1;i<arr.size();i++){
        if(arr[start]== arr[i]){
            arr[start]*=2;
            arr[i]=0;
        }
        start++;
    }
    int mid = 0;
    int first = 0;
    while(mid<=arr.size()-1){
        if(arr[mid]!=0){
            swap(arr[mid],arr[first]);
            first++;
        }
        mid++;
    }
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {1,2,2,1,1,0};
    applyOperation(arr);
    return 0;
}