#include<iostream>
using namespace std;

// pointer pass hua h 
void check(int array[],int size){

    // answer must be 20 but answer is 4
    cout<<"size of whole array is "<<sizeof(array)<<endl;
}

// same here pointer pass hua h
void check(int *array ,int size){

    // answer must be 20 but answer is 4
    cout<<"size of whole array is "<<sizeof(array)<<endl;
}
void changeValue(int array[],int size){
    array[1] = 1;
    array[2]= 2;
    array[3]=3;

}
int main(){
    int a = 8;
    int b = a;
    int *c = &a;
    char k = 'a';
    char* v = &k;

    // size of the pointer 
    cout<<sizeof(v)<<endl;
    cout<<sizeof(c)<<endl;

    int*ptr ;
    cout<<*ptr<<endl;

    int a = 5;
    int * ptr = &a;
    cout<<a<<endl;
    cout<<&a<<endl;
    // cout<<*a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<*ptr/2<<endl;
    cout<<*ptr+1<<endl;


    int a = 5;
    int * p = &a;

    // copy pointer
    
    int *q = p;
    cout<<"a : "<<a<<endl;
    cout<<" &a : "<<&a<<endl;
    // cout<<" *a : "<<*a<<endl;   // error 
    cout<<" p : "<<p<<endl;
    cout<<" &p : "<<&p<<endl;
    cout<<" *p : "<<*p<<endl;
    cout<<" q : "<<q<<endl;
    cout<<" &q : "<<&q<<endl;
    cout<<" *q : "<<*q<<endl;

    // pointer in array 

    int array[]= {10,20,30,40};
    // print base address 
    cout<<array+1<<endl;
    // print value of the base index
    cout<<*array +1<<endl;
    int * ptr = array;
    cout<<"the array address is "<<*ptr<<endl;
    ptr = ptr + 1;
    cout<<"the array address is "<<*ptr<<endl;

    int array[]= {10,20,30,40,50};
    int * ptr = array;
    // print base address
    cout<<array<<endl;

    // print again base address
    cout<<&array<<endl;

    // print value of base address
    cout<<array[0]<<endl;

    // print base address
    cout<<&array[0]<<endl;

    // print base addres of array 
    cout<<ptr<<endl;

    // print own base address 
    cout<<&ptr<<endl;

    // print value of base addess of array
    cout<<*ptr<<endl;

    //  base value me add 1 karna h
    cout<<*array+1<<endl;

    // pehle address ko 1 shift karo phir uska value print karo
    cout<<*(array+1)<<endl;

    // pehel address ko 3 shift karo phir uski value print karo
    cout<<*(array+3)<<endl;
    

    // create array 

    int array[] = {10,20,30,40,50,60};

    // ek pointer me array k address store kar diya
    int *ptr = array;
    // ek dusere pointer me previous pointer k addres store karwa diya with 1 shift;
    int * pr = ptr +1;
    
    // print value of base addres 
    cout<<array<<endl;

    // print base address of array;
    cout<<&array<<endl;

    // print value of base address
    cout<<array[0]<<endl;

    // pirnt address of that value
    cout<<&array[0]<<endl;

    // print address that stroe in it as a value
    cout<<ptr<<endl;

    // print own address
    cout<<&ptr<<endl;

    // print value of address that store in
    cout<<*ptr<<endl;

    // print address that store in pr
    cout<<pr<<endl;

    // print address of the value
    cout<<&pr<<endl;

    // print value of address
    cout<<*pr<<endl;

    // pehel value then add 1
    cout<<*ptr +1<<endl;

    // pehel value then addd 2
    cout<<*(ptr) +2<<endl;

    // address ko shift karo 2 then print value it
    cout<<*(ptr+2)<<endl;

    // pehel value print and then add 2;
    cout<<*pr+2 <<endl;

    // pehele right shift then print value
    cout<<*(pr+4)<<endl;


    char array[100] = "aditya";
    // char * ptr = array;

    // print whole array ;
    cout<<array<<endl;

    // pritn address of array ;
    cout<<&array<<endl;

    // print value of index 0;
    cout<<array[0]<<endl;

    // print address of pointer 
    cout<<&ptr<<endl;

    // print the value of pointer
    cout<<*ptr<<endl;

    // pehel three right shift and pritn alll value
    cout<<*(ptr+3)<<endl;

    // print whole ptr
    cout<<ptr<<endl;


    int array[]= {10,20,30,40,50};
    int size = 5;
    // check(array,size);


    cout<<array[1]<<" "<<array[2]<<" "<<array[3]<<endl;
    changeValue(array,size);
    cout<<array[1]<<" "<<array[2]<<" "<<array[3]<<endl;

}