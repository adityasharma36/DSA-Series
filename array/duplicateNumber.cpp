#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// sorting method 

// int duplicateNumber(vector<int> array){
//     sort(array.begin(),array.end());
//     int start = 0;
//     for(int i = 1;i<array.size();i++){
//         if(array[start]==array[i]){
//             return array[i];
//         }
//         start++;
//     }
//     return -1;
// }


// negative indexing

// int duplicateNumber(vector<int> array){
//     for(int i = 0;i<array.size();i++){
//         int index = abs(array[i]);
//         if(array[index]<0){
//             return abs(array[i]);
//         }
//         array[index]*=-1;
//     }
//     return -1;
// }

// swapping method  
int duplicateNumber(vector<int> array){
    while(array[array[0]]!=array[0]){
        swap(array[array[0]],array[0]);
    }
    return array[0];
}
int main(){
    vector<int> array = {1,3,4,2,2};
    cout<<duplicateNumber(array);
}