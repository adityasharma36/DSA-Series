#include<iostream>
using namespace std;
int getLength(char arr[]){
    int start = 0;
    while(arr[start]!='\0'){
        start++;
    }
    return start;
}
void lowerCaseToUpperCase(char arr[]){
    int start = 0;
    int end = getLength(arr)-1;
    for(start;start<=end;start++){
        if(arr[start]>=97 && arr[start]<=122){
            arr[start]= arr[start]-'a'+'A';
        }
    }
    for(int i = 0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    char arr[20];
    cin.getline(arr,20);
    lowerCaseToUpperCase(arr);
}