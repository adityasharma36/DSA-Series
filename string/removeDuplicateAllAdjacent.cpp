#include<iostream>
#include<string>
using namespace std;
void removeDuplicateAdjacent(string a,string & b){
    for(int i = 0;i<a.size();i++){
        if(b.empty()){
            b.push_back(a[i]);
        }else if(b[b.size()-1]!=a[i]){
            b.push_back(a[i]);
        }else{
            b.pop_back();
        }
    }

}
int main(){
    string  a = "abbacadd";
    string b = "";
    removeDuplicateAdjacent(a,b);
    cout<<b<<endl;
}