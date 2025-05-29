#include<iostream>
#include<limits.h>
using namespace std;
int cutIntoSegment(int target,int ele1,int ele2,int ele3){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MIN;
    }
    int maxi = INT_MIN;
    int ans = cutIntoSegment(target-ele1,ele1,ele2,ele3) +1;
    int ans2 = cutIntoSegment(target-ele2,ele1,ele2,ele3)+1;
    int ans3 = cutIntoSegment(target-ele3,ele1,ele2,ele3)+1;
    maxi = max(ans,max(ans2,ans3));
    return maxi;
}
int main(){
    int target = 6;
    int element1 = 5;
    int element2 = 2;
    int element3 = 3;
    cout<<cutIntoSegment(target,element1,element2,element3)<<endl;
}