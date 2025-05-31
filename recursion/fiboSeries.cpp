#include<iostream>
using namespace std;
int fibo(int number){
    if(number==1){
        return 0;
    }
    if(number==2){
        return 1;
    }
    int chhota = fibo(number-1);
    int badha = fibo(number-2);
    int sum = chhota+badha;
    return sum;
}
int main(){
    int number = 5;
    cout<<fibo(number);
}