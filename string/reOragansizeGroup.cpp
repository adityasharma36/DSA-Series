#include<iostream>
#include<string>
#include<limits.h>
using namespace std;
string isPossible(string& ans){
    int hash[26] = {0};
    for(int i = 0;i<ans.size();i++){
        hash[ans[i]-'a']++;
    }
    int maxElement = INT_MIN;
    char maxChar;
    for(int i = 0;i<26;i++){
        if(hash[i]>maxElement){
            maxElement = hash[i];
            maxChar = 'a'+i;
        }
    }
    int index = 0;
    while(maxElement>0 && index<ans.size()){
        ans[index]= maxChar;
        maxElement--;
        index+=2;
    }
    if(maxElement!=0){
        return "";
    }
    for(int i = 0;i<26;i++){
        while(hash[i]>0){
            index = index>=ans.size()? 1:index;
            ans[index] = i+'a';
            hash[i]--;
            index+=2;
        }
    }
    return ans;
}
int main(){
    string ans = "aaabbbefgg";
    cout<<isPossible(ans)<<endl;
}