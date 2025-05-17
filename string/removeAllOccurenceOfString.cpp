#include<iostream>
#include<string>
using namespace std;
void removeAllOccurence(string & ab ,string part){
    int index = ab.find(part);
    int length  = part.size();
    while(index!= string::npos){
        ab.erase(index,length);
        index = ab.find(part);
    }
}
int main(){
    string ab = "aditya";
    string part = "a";
    removeAllOccurence(ab,part);
    cout<<ab<<endl;
}