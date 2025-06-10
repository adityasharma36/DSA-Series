#include<iostream>
#include<string>
using namespace std;
void removeAllOccurence(string & s,string p){
    int index = s.find(p);
    if(s.find(p)!=string::npos){
        string leftStirng = s.substr(0,index);
        string rightString = s.substr(index+p.size(),s.size());
        s = leftStirng+rightString;
        removeAllOccurence(s,p);
        
    }
}
int main(){
    string s = "daabcbaabcbc";
    string p = "a";
    removeAllOccurence(s,p);
    cout<<s<<endl;
}