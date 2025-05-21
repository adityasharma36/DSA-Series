#include<iostream>
#include<string>
using namespace std;
void reversOnlyLetter(string & a){
    int start = 0;
    int end = a.size()-1;
    while(start<=end){
        if(isalpha(a[start]) && isalpha(a[end])){
            swap(a[start],a[end]);
            start++;
            end--;
        }else if(!isalpha(a[start])){
            start++;
        }else{
            end--;
        }
    }
}
int main(){
    string a = "Test1ng-Leet=code-Q!";
    reversOnlyLetter(a);
    cout<<a<<endl;
}