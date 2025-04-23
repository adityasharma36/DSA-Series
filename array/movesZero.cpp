#include<iostream>
#include<vector>
using namespace std;
void movesZero(vector<int> array){
    int start = 0;
    int end = array.size()-1;
    int mid = 0;
    while(mid<=end){
        if(array[mid]!=0){
            swap(array[mid],array[start]);
            mid++;
            start++;
        }else{
            mid++;
        }
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    vector<int> array = {0,1,0,3,12};
    movesZero(array);
    return 0;
}