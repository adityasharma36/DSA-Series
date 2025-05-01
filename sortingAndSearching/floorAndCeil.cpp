#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> & arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int answer = arr.size();
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(arr[mid]>=target){
            answer = arr[mid];
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return answer;
};
int upperBound(vector<int> & arr,int target){
    
    int start = 0;
    int end = arr.size()-1;
    int answer = arr.size();
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(arr[mid]<=target){
            answer = arr[mid];
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return answer;
}
int main(){
    vector<int> arr = {3, 4, 5, 7, 8, 10};
    int target = 6;
    int lowerIndex = lowerBound(arr,target);
    int upperIndex = upperBound(arr,target);
    cout<<lowerIndex<<" "<<upperIndex<<endl;
    return 0;
}