#include<iostream>
#include<string>
using namespace std;
void printAllSubArray(string & s,int start ,int end){
    if(end==s.size()) return;
    for(int i = start;i<=end;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    printAllSubArray(s,start,end+1);
}
void printSubArray(string s){
    for(int i = 0;i<s.size();i++){
        int end = i;
        printAllSubArray(s,i,end);
    }
}
int main(){
    string s = "aditya";
    // int start = 0;
    // int end = s.size()-1;
    printSubArray(s);
}