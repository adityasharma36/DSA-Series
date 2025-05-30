#include<iostream>
using namespace std;
int factorial(int number){
    if(number == 1){
        return 1;
    }
    int chotaNumber = factorial(number-1);
    int currentNumber = chotaNumber*number;
    return currentNumber;
}
int main(){
    int number = 3;
    int fact = factorial(number);
    cout<<fact<<endl;

}