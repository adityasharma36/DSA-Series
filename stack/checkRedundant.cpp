#include<iostream>
#include<stack>
using namespace std;
bool checkRedundant(string & st){
    stack<char> s;
    for(int i = 0;i<st.size();i++){
        char ans = st[i];
        if(ans == '(' || ans == '+'|| ans == '*' || ans == '/' || ans == '-'){
            s.push(ans);
        }else{
            if(ans == ')' && !s.empty() && s.top()== '+'){
                s.pop();
                s.pop();

            }
            else if(ans == ')' && !s.empty() && s.top()== '-'){
                s.pop();
                s.pop();  
            }
            else if(ans == ')' && !s.empty() && s.top()== '*'){
                s.pop();
                s.pop();
                
            }else if(ans == ')' && !s.empty() && s.top()== '/'){
                s.pop();
                s.pop();
                
            }else {
                return false;
            }
        }
    }
    return s.empty() ? true : false;
}
int main(){
     string st = "((a + b) * c)";
     cout<<checkRedundant(st);
}