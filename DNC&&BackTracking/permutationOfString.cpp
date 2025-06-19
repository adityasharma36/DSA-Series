#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(string st,int i ){
    if(i>=st.size()){
        cout<<st<<endl;
        return;
    }
    for(int j = i;j<st.size();j++){
        swap(st[i],st[j]);
        solve(st,i+1);
        swap(st[i],st[j]);
    }
}
int main(){
    string st = "kk";
    // vector<string> ans;
    int i = 0;    
    solve(st,i);

    // for(auto an : ans){
    //     cout<<an<<endl;
    // }
}