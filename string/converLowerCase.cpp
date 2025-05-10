#include<iostream>
using namespace std;
int getLenght(char arr[]){
    int start = 0;
    while(arr[start]!='\0'){
        start++;
    }
    return start;
}
void convertLowerCase(char arr[]){
    int start = 0;
    int end = getLenght(arr)-1;
    for(int i = 0;i<=end;i++){
        if(arr[i]>='A' && arr[i]<='Z'){
        arr[i]= arr[i]-'A'+'a';
    }}
    for(int i = 0;i<=end;i++){
        cout<<arr[i];
    }
}
int main(){
    char arr[20];
    cin.getline(arr,20);
    convertLowerCase(arr);
}