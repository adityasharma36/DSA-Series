#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> & array,int end,int target){
    int start = 0;
    while(start<end){
        int mid = (end-start)/2 + start;
        if(array[mid]== target){
            return mid;
        }
        else if(array[mid]>target) end = mid-1;
        else start = mid+1;
    }
    return -1;
}
int main(){
    vector<int> array = {1,2,3,4,5,6,7,8,9,10};
    int end = array.size()-1;
    int target = 9;
    int index = binarySearch(array,end,target);
    cout<<"the index of "<<index<<endl;
}