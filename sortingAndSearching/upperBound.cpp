#include<iostream>
#include<vector>
using namespace std;
int upperBounding(vector<int> & arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int answer = arr.size();
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(arr[mid]>=target){
            answer =mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return answer;
}
int main(){
    vector<int> arr= {1,1,2,3,4,5,6,8,8,8};
    int target = 1;
    int upperIndex = upperBounding(arr,target);
    cout<<upperIndex<<endl;

}