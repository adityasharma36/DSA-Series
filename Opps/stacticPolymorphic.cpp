#include<iostream>
#include<string>
using namespace std;

// function overloading static polymorphic

class Add{
    public:

    // same  name function or behaviour but different argunment count and argument type is known as 'function overloading '
    // argument type 'int' and argument count 'int and 2 variable count '

    int add(int a ,int b){
        cout<<"sum of 2 interger "<<endl;
        return a+b;
    }

    // argument type 'int' and argument count 'int and 3 variable count '
    int add(int a,int b,int c){
        cout<<"sum of 3 interger "<<endl;
        return a+ b+ c;   
    }
    // argument type 'double' and argument count 'double and 2 variable '
    double add(double a,double b){
        cout<<"sum of 2 double "<<endl;
        return a +b;
    }
// };

// ' operator overloading static polymorphic ' 

class Complex{
    int real;
    int imag;
    Complex() : real(0), imag(0) {}
    Complex(int _real,int _imag){
        real = _real;
        imag = _imag;
    }
    Complex operator + (const Complex & obj){
        Complex res;
        res.real = this->real + obj.real;
        res.imag = this->imag + obj.imag;
        return res;
    }
};
int main(){
    // operator overloading static function
    
    
    Complex A( );

    // function overloading static function 

    // int a = 4;
    // int b = 5;
    // int c = 6;
    // Add sum;
    // cout<<sum.add(a,b)<<endl;
    // cout<<endl;
    // cout<<sum.add(a,b,c)<<endl;
    // cout<<endl;
    // cout<<sum.add(4.2,4.5)<<endl;
    // cout<<endl;



    
}