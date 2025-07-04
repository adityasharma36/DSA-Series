#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool checkSorted(stack<int>& s,int element){
    if(s.empty()){
        return true;
    }
    int element2 = s.top();
    s.pop();
    if(element2<=element){
        bool answer = checkSorted(s,element2);
        return answer;
    }else{
        return false;
    }

}
int main(){
    vector<int> v = {50,20,30,40,50};
    int maxs = v[v.size()-1];
    stack<int> s ;
    for(int i = 0;i<v.size();i++){
        s.push(v[i]);
    }
    cout<<checkSorted(s,maxs);
}