#include<iostream>
#include<vector>
using namespace std;
void mergerTwoSortedArray(vector<int> array,vector<int> arr,vector<int> & newArray){
    int start= 0;
    int start1 = 0;
    int end = arr.size()-1;
    int end1 = array.size()-1;
    while(start<=end && start1<=end1){
        if(arr[start]>array[start1]){
            newArray.push_back(array[start1]);
            start1++;
        }else{
            newArray.push_back(arr[start]);
            start++;
        }
    }
    for(int i = start;i<=end;i++){
        newArray.push_back(arr[i]);
    }
    for(int i = start1;i<=end1;i++){
        newArray.push_back(array[i]);
    }
}
int main(){
    vector<int>array = {10,30,50,70,90};
    vector<int> arr ;
    vector<int> newArray;
    mergerTwoSortedArray(array,arr,newArray);
    for(int i = 0;i<newArray.size();i++){
        cout<<newArray[i]<<" ";
    }
}