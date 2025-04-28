#include<iostream>
#include<vector>
using namespace std;
int lastIndex(vector<int> array,int target){
    int index = -1;
    int start = 0;
    int end = array.size()-1;
    while(start<end){
        int mid = (end-start)/2 + start;
        if(array[mid]==target){
            start = mid+1;
            index = mid;
        }else if(array[mid]>target) end = mid-1;
        else start = mid+1;
    }
    return index;
}
int main(){
     vector<int> array = {1,2,2,2,2,3,4,5,6,7};
    int target = 2;
    int answer = lastIndex(array,target);
    cout<<"first index of the "<<target<<" is "<<answer<<endl;
}