#include<iostream>
#include<vector>
using namespace std;
int nearlySortedArray(vector<int> array,int target){
    int start = 0;
    int end = array.size()-1;
    while(start<=end){
        int mid = (end-start)/2 +start;
        if(array[mid]== target){
            return mid;
        }else if(array[mid-1]==target){
            return mid-1;
        }else if(array[mid+1]==target){
            return mid+1;
        }else if(array[mid]>target){
            end = mid-2;
        }else{
            start = mid+2;
        }
    }
    return -1;
}
int main(){
    vector<int> array = {10,3,40,20,50,80,70};
    int target = 50;
    int answer = nearlySortedArray(array,target);
    cout <<"the answer is "<<answer<<endl;
}