#include<iostream>
#include<vector>
using namespace std;

// brute method  


// int findPivotElement(vector<int> arr){
//     for(int i = 0;i<arr.size();i++){
//         int leftSum = 0;
//         int rightSum = 0;
//         for(int j = 0;j<i;j++){
//             leftSum+=arr[j];
//         }
//         for(int j = i+1;j<arr.size();j++){
//             rightSum+=arr[j];
//         }
//         if(leftSum==rightSum) return i;
//     }
//     return -1;
// }

// optimise method 


int findPivotElement(vector<int> arr){
    vector<int> leftSum(arr.size(),0);
    vector<int> rightSum(arr.size(),0);
    for(int i = 1;i<arr.size();i++){
        leftSum[i]= arr[i-1]+leftSum[i-1];
    }
    for(int i = arr.size()-2;i>=0;i--){
        rightSum[i]= arr[i+1]+ rightSum[i+1];
    }
    for(int i = 0;i<arr.size();i++){
        if(leftSum[i]==rightSum[i]) return i;
    }
    return -1;

}
int main(){
    vector<int> arr = {1,7,3,6,5,6};
    int answer = findPivotElement(arr);
    cout<<answer<<endl;
}