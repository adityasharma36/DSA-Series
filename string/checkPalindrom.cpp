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
bool isPossible(char arr[]){
    int start = 0;
    int end = getLength(arr)-1;
    while(start<=end){
        if(arr[start]!=arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    char arr[20];
    cin.getline(arr,20);
    if(isPossible(arr)){
        cout<<"true";
    }else{
        cout<<"false";
    }

}