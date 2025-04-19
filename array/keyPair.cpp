#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;

// brute force 


// bool keyPair(vector<int> arr,int target){
//     for(int i = 0;i<arr.size();i++){
//         for(int j = 1;j<arr.size();j++){
//             if(arr[i]+arr[j]==target) return true;
//         }
//     }
//     return false;
// }


// best method 

// bool keyPair(vector<int> arr,int target){
//     sort(arr.begin(),arr.end());
//     int start = 0;
//     int end = arr.size()-1;
//     while(start<=end){
//         if(arr[start]+ arr[end]==target ) return true;
//         else if(arr[start]+arr[end]>target) end--;
//         else start++;
//     }
//     return false;

// }

//   optimize method 

bool keyPair(vector<int> arr,int target ){
    unordered_set<int> s;
    for(int i = 0;i<arr.size();i++){
        int element = target - arr[i];
        if(s.find(element)!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main(){
    vector<int> arr= {1,4,45,6,10,8};
    int target = 16;
    bool ans = keyPair(arr,target);
    cout<<ans<<endl;
}