#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// brute force 

// int missingNumber(vector<int> arr){
//     sort(arr.begin(),arr.end());
//     for(int i = 0;i<arr.size();i++){
//         if(arr[i]!=i) return i;
//     }
//     return arr.size();
// }

// optimise solution 

int missingNumber(vector<int> arr){
    int xo = 0;
    for(int i = 0;i<arr.size();i++){
        xo = xo^arr[i];
    }
    for(int i = 0;i<=arr.size();i++){
        xo = xo^i;
    }
    return xo;
}
int main(){
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    int missing = missingNumber(arr);
    cout<<missing<<endl;
}