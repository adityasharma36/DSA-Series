#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// sorting method 
// int findAllDuplicate(vector<int> & array){
//     vector<int> newArray;
//     sort(array.begin(),array.end());
//     int start = 0;
//     for(int i = 1;i<array.size();i++){
//         if(array[start]==array[i]){
//             newArray.push_back(array[start]);
//         }
//         start++;
//     }
//     for(int i = 0;i<newArray.size();i++){
//         cout<<newArray[i]<<" ";
//     }
// }


// hashing method 
int findAllDuplicate(vector<int> & array){
    unordered_map<int,int> um;
    for(auto arr: array){
        um[arr]++;
    }
    for(auto arr: um){
        if(arr.second>1){
            cout<<arr.first<<" ";
        }
    }
}

int main(){
    vector<int> array = {4,3,2,7,8,2,3,1};
    findAllDuplicate(array);
}