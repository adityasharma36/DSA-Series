#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> arr,int start){
    if(start==arr.size()){
        return;
    }
    reverseArray(arr,start+1);
    cout<<arr[start]<<" ";
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int start = 0;
    reverseArray(arr,start);
}