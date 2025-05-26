#include<iostream>
#include<string>
using namespace std;
bool isPresent(string s,char a,int start,int end){
    if(start>end){
        return false;
    }
    if(a==s[start]) return true;
    return isPresent(s,a,start+1,end);
}
int main(){
    string s = "aditya";
    char c = 'd';
    int start = 0;
    int end = s.size()-1;
    cout<<isPresent(s,c,start,end);
}