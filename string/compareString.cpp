#include<iostream>
#include<string>
using namespace std;
bool isPossible(string a,string b){
    if(a.size()!=b.size()){
        return false;
    }
    for(int i = 0;i<a.size();i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string a = "naman";
    string b = "naman";
    if(isPossible(a,b)){
        cout<<"string a and string b is same "<<endl;
    }else{
        cout<<"not comparble string "<<endl;
    }
}