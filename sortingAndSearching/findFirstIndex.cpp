#include<iostream>
#include<vector>
using namespace std;
int firstIndex(vector<int> & array,int target){
    int start = 0;
    int end = array.size()-1;
    int index= -1;
    while(start<end){
        int mid = (end-start)/2 + start;
        if(array[mid]==target){
            index= mid;
            end= mid-1;
        }else if(array[mid]>target) end = mid-1;
        else start = mid+1;
    }
    return index;
}
int main(){
    vector<int> array = {1,2,2,2,2,3,4,5,6,7};
    int target = 2;
    int answer = firstIndex(array,target);
    cout<<"first index of the "<<target<<" is "<<answer<<endl;

}