#include<iostream>
using namespace std;
int nthStair(int number){
    if(number == 1 || number == 0){
        return 1;
    }
    int ans = nthStair(number-1) + nthStair(number-2);
    return ans;
}
int main(){
    int number = 5;
    cout<<nthStair(number);
}