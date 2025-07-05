#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int countRev(string s){
    if(s.size() & 1) return -1;
    stack<char > sta;
    for(int i = 0;i<s.size();i++){
        char ans = s[i];

        if(ans == '{'){
            sta.push(ans);
        }else{
            if(!sta.empty() && sta.top()== '{'){
                sta.pop();
            }else{
                sta.push(ans);
            }
        }
    }
    int count = 0;
    while(!sta.empty() ){
        char ch1 = sta.top() ; sta.pop();
        char ch2 = sta.top() ; sta.pop();
        if(ch1 == ch2){
            count+=1;
        }else{
            count+=2;
        }
    }

    return count;
}
int main(){
    string s = "{{}{{{}{{}}{{";
    cout<<countRev(s);
}