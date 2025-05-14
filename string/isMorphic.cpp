#include<iostream>
#include<string>
using namespace std;
bool isPossible(string a,string b){
    if(a.size()!=b.size()){
        return false;
    }
    int hash[256]= {0};
    bool isIsmorphic[256] = {0};
    for(int i = 0;i<a.size();i++){
        if(hash[a[i]]==0 && isIsmorphic[b[i]]==0){
            hash[a[i]]= b[i];
            isIsmorphic[b[i]] = true;
        }
    }
    for(int i = 0;i<a.size();i++){
        if(char(hash[a[i]])!=b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string a = "zor";
    string b = "egg";
    if(isPossible(a,b)){
        cout<<"correct"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}