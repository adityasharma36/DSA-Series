#include<iostream>
#include<string>
using namespace std;
void reverseString(string a,int start,int end){
    if(start>end){
        return ;
    }
    reverseString(a,start+1,end);
    cout<<a[start];
}
int main(){
    string a = "abbaa";
    int start = 0;
    int end = a.size()-1;
    reverseString(a,start,end);
}
