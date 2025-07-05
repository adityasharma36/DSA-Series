#include<iostream>
using namespace std;
class Stack{
    public:
    int * array;
    int topIndex;
    int size;
    Stack(int capacity){
        array = new int[capacity];
        topIndex = -1;
        size = capacity;
    }
    void push(int val){
        if(topIndex==size-1){
            cout<<"stack is over flow "<<endl;
        }else{
            topIndex++;
            array[topIndex] = val;
        }
    }
    void pop(){
        if(topIndex==-1){
            cout<<"stack underflow "<<endl;
        }else{
            array[topIndex]=0;
            topIndex--;
        }
    }
    int getSize(){
        return topIndex +1;
    }
    bool isEmpty(){
        if(topIndex==-1){
            return true;
        }else{
            return false;
        }
    }
    int getTop(){
        if(topIndex==-1){
            cout<<"no top element "<<endl;
            return -1;
        }else{
            return array[topIndex];
        }
    }
    void print(){
        for(int i = topIndex;i>=0;i--){
            cout<<array[i]<<" ";
        }
    }
};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout<<s.getTop()<<endl;
    cout<<s.isEmpty()<<endl;
    s.print();
}