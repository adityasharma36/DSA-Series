#include<iostream>
#include<vector>
using namespace std;
int lastIndex(vector<int> & nums,int target){
    int start = 0;
    int end = nums.size()-1;
    int answer = -1;
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(nums[mid]==target){
            answer = mid;
            start = mid+1;
        }else if(nums[mid]>target){
            end = mid-1;
        }else {
            start = mid +1;
        }
    }
    return answer;
}
int firstIndex(vector<int> & nums,int target){
    int start = 0;
    int end = nums.size()-1;
    int answer = -1;
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(nums[mid]==target){
            answer = mid;
            end = mid-1;
        }else if(nums[mid]>target){
            end = mid-1;
        }else {
            start = mid +1;
        }
    }
    return answer;
}
int main(){
    vector<int> nums = {1,2,2,2,2,2,3,4,5,6,6,6};
    int target = 2;
    cout<< lastIndex(nums,target)<<" "<<firstIndex(nums,target)<<endl;
    int totalIndex = lastIndex(nums,target) - firstIndex(nums,target) +1 ;
    cout<<"total number of elmenet present is "<<totalIndex<<endl;
}