#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// double maximumSubarray(vector<int> ve, int  answer,int kIndex){
//     int start = 0;
//     int mid = kIndex-1;
//     int end = ve.size();
//     int mis = INT_MIN;
//     while(mid<end){
//         int sum = 0;
//         for(int i = start;i<=mid;i++){
//             sum+=ve[i];
//         }
//         mis = max(mis,sum);
//         start++;
//         mid++;
//     }
//     double maximumAverage = mis/double(kIndex);
//     return maximumAverage;
// }
// double sildingWindow(vector<int> &ve,int & kIndex){
//     int start = 0;
//     int mid = kIndex-1;
//     int sum = 0;
//     for(int i =start;i<=mid;i++){
//         sum+=ve[i];
//     }
//     int maxSum = sum;
//     mid++;
//     while(mid<ve.size()){
//         sum -= ve[start++];
//         sum += ve[mid++];
//         maxSum = max(maxSum,sum);
//     }
//     double answer = maxSum /(double) kIndex;
//     return answer;
// }

double sildingWindow(vector<int> ve,int kIndex){
    // int start = 0;
    // int mid = kIndex-1;
    // int sum  = INT_MIN;
    // while(mid<ve.size()){
    //     int totalSum = 0;
    //     for(int i = start;i<=mid;i++){
    //         totalSum+=ve[i];
    //     }
    //     sum= max(sum,totalSum);
    //     start++;
    //     mid++;
    // }
    // double answer = sum / double(kIndex);
    // return answer;

    int start = 0;
    int end = kIndex-1;
    int sum = 0;
    for(int i = 0;i<=end;i++){
        sum+=ve[i];
    }
    int totatSum = sum;
    end++;
    while(end<ve.size()){
        sum -=ve[start++];
        sum+=ve[end++];
        totatSum = max(totatSum,sum);
    }
    double answer = totatSum/double(kIndex);
    return answer;
}
int main(){
    vector<int> ve = {1,12,-5,-6,50,3};
    int kIndex = 4;
    cout<<sildingWindow(ve,kIndex);

}