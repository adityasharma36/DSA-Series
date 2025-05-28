#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>  array,int start,int end){
    if(start==end){
        return true;
    }
    if(array[start]>array[start+1]) return false;
    return isSorted(array,start+1,end);
};
int main(){
    vector<int> array ={1,2,3,4,10};
    int start = 0;
    int end = array.size()-1;
    cout<<isSorted(array,start,end);

}