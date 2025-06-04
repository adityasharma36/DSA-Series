// #include<iostream>
// #include<string>
// using namespace std;
// int lastOccurence(string a,char b,int start,int end,int & ans){
//     if(start>end){
//         return ans;
//     }

//     if(a[start]==b){
//         ans = start;
//     }
//     return lastOccurence(a,b,start+1,end,ans);

// }
// int main(){
//     string a = "aa";
//     char b = 'a';
//     int start = 0;
//     int end = a.size()-1;
//     int ans = -1;
//     cout<<lastOccurence(a,b,start,end,ans);
    
// }

#include<iostream>
#include<string>
using namespace std;
int lastOccurence(string a,char b,int start,int end){
    if(end<start){
        return -1;
    }
    if(a[end]==b){
        return end;
    }
    return lastOccurence(a,b,start,end-1);
}
int main(){
    string a = "d";
    char b = 'd';
    int start = 0;
    int end = a.size()-1;
    cout<<lastOccurence(a,b,start,end);
}