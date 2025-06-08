#include<iostream>
using namespace std;
void printCount(int number){
    if(number==0){
        return ;
    }
    printCount(number-1);
    cout<<number<<endl;
}
int main(){
    int number = 5;
    printCount(number);
}