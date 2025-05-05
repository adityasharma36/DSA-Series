#include<iostream>
#include<vector>
using namespace std;
int squareRoot(int target){
    int start = 0;
    int end = target;
    int answer = -1;
    while(start<=end){
        int mid = (end-start)/2 + start;
        if(mid*mid == target){
            return mid;
        }else if(mid*mid>target){
            end = mid-1;
        }else{
            answer = mid;
            start = mid+1;
        }
    }
    return answer;
}
int main(){
    int target = 4;
    int answer = squareRoot(target);
    int rootUpto;
    cout<<"enter your root upto "<<endl;
    cin>>rootUpto;
    double ans = answer;
    double adding = 0.1;
    for(int i = 0;i<rootUpto;i++){
        for(double j = ans;j*j<=target;j+=adding){
            ans = j;
        }
        adding = adding/10;
    }
    cout<<ans<<endl;
}