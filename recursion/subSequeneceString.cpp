#include<iostream>
#include<string>
using namespace std;
void printSubSequence(string str,string outPut,int i ){
    if(i>=str.size()){
        cout<<outPut<<endl;
        return;
    }
    printSubSequence(str,outPut,i+1);
    outPut.push_back(str[i]);
    printSubSequence(str,outPut,i+1);
}
int main(){
    string str = "abc";
    string outPut = "";
    int i = 0;
    printSubSequence(str,outPut,i);
}