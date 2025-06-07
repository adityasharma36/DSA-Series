#include<iostream>
#include<vector>
using namespace std;
void arrayRecurse(vector<int> & arr,int nuber){
    if(nuber==arr.size()){
        return;
    }
    cout<<arr[nuber]<<endl;
    arrayRecurse(arr,nuber+1);

}
int main(){
    int number = 0;
    vector<int> arr = {1,2,3,4,5,6};
    arrayRecurse(arr,number);
}