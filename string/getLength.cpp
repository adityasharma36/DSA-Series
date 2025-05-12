#include<iostream>
#include<string>
using namespace std;
int getLength(char arr[]){
    int start = 0;
    while(arr[start]!='\0'){
        start++;
    }
    return start;
}
int main(){
    char arr[20];
    cin.getline(arr,20);
    cout<<"the length is "<<getLength(arr)<<endl;
}