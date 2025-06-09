#include<iostream>
using namespace std;
void printReverseCounting(int number){
    if(number==0){
        return;
    }
    cout<<number<<" ";
    printReverseCounting(number-1);
}
int main(){
    int number = 10;
    printReverseCounting(number);
}