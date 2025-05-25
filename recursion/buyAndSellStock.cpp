#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void checkProfit(vector<int> arr,int i,int & minPrice,int & maxPrice){
    if(i== arr.size()) return;
    if(arr[i]<minPrice) minPrice = arr[i];
    int totalProfit = arr[i]-minPrice;
    if(arr[i]>maxPrice) maxPrice = totalProfit;
    checkProfit(arr,i+1,minPrice,maxPrice);
}
int maxProfite(vector<int> & arr){
    int minPrice = INT_MAX;
    int maxPrice = INT_MIN;
    checkProfit(arr,0,minPrice,maxPrice);
    return maxPrice;

}
int main(){
    vector<int> arr = {7,1,5,3,6,4};
    cout<<maxProfite(arr);
}