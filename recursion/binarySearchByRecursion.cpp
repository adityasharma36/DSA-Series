#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr,int element,int start ,int end){
    if(start>end){
        return -1;
    }
    int mid = (end-start)/2 + start;
    if(element == arr[mid]){
        return mid;
    }
    if(arr[mid]>element){
        return binarySearch(arr,element,start,mid-1);
    }else{
        return binarySearch(arr,element,mid+1,end);
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int start = 0;
    int end = arr.size()-1;
    int element = 11;
    cout<<binarySearch(arr,element,start,end)<<endl;
}