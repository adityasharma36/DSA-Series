#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isPossible(string s,string t){
    if(s.size()!=t.size()){
        return false;
    }
    for(int i = 0;i<s.size();i++){
        int find = t.find(s[i]);
        if(find!=string::npos){
            t.erase(find,1);
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    string s = "nama";
    string t = "aman";
    if(isPossible(s,t)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    
}