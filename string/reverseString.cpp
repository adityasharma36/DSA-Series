#include<iostream>
#include<string>
using namespace std;
int getLenght(char arr[]){
    int start = 0;
    while(arr[start]!='\0'){
        start++;
    }
    return start;
}
void reverseString(char arr[]){
    int lenghts = getLenght(arr)-1;
    for(int i = lenghts;i>=0;i--){
        cout<<arr[i];
    }
}
int main(){
    char arr[20];
    cin.getline(arr,20);
    reverseString(arr);
}