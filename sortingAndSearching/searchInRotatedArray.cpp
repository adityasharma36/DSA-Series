#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> & arr,int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            if(arr[start]<=target && target<=arr[mid]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }else{
            if(arr[mid]<=target && target<=arr[end]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    int answer = findPivot(arr,target);
    cout<<answer<<endl;
}