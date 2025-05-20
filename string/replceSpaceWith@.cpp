#include<iostream>
using namespace std;
int getLength(char arr[]){
    int start = 0;
    while(arr[start]!='\0'){
        start++;
    }
    return start;
}
void replaceSpaceWithElse(char arr[]){
    int lengths = getLength(arr)-1;
    for(int i = 0 ;i<=lengths;i++){
        if(arr[i]== ' '){
            arr[i]= '@';
        }
    }
    for(int i = 0;i<=lengths;i++){
        cout<<arr[i];
    }
}
int main(){
    char arr[20];
    cin.getline(arr,20);
    replaceSpaceWithElse(arr);
}