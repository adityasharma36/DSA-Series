#include<iostream>
#include<vector>
using namespace std;
int lowerBounding(vector<int> & arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int answer = -1;
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(arr[mid]>=target){
            answer = mid;
            end = mid-1;
        }else {
            start = mid+1;
        }
    }
    return answer;

}
int main(){
    vector<int> arr = {1,2,3,4,5,6,6,6,8};
    int target = 7;
    int answer = lowerBounding(arr,target);
    cout<<answer<<endl;

}