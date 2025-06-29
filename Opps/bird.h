#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird{
    public:
    virtual void  eat() = 0;
    virtual void sleep()= 0;
};
class Sparrow : public Bird{
    public:
    void eat(){
        cout<<"sparrow eating very much \n";
    }
    void sleep(){
        cout<<"sparrow sleeping very much \n";
    }
};

class eagle : public Bird{
    public:
        void eat(){
            cout<<"eagle eating a lot  \n";
        }
        void sleep(){
            cout<<"eagle sleeping a lot  \n";
        }
};

#endif // BIRD_H
