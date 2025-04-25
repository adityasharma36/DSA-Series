#include<iostream>
#include<vector>
using namespace std;
void sortColor(vector<int> array){
    int start = 0;
    int end = array.size()-1;
    int mid = 0;
    while(mid<=end){
        if(array[mid]==0){
            swap(array[mid],array[start]);
            mid++;
            start++;
        }else if(array[mid]==1){
            mid++;
        }else{
            swap(array[mid],array[end]);
            end--;
        }
    }
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    vector<int> aray = {2,0,2,1,1,0};
    sortColor(aray);
}