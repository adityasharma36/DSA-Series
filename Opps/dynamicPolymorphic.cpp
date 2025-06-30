#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
    virtual void  draw(){
        cout<<"Gemotry wayy ......"<<endl;
    }
};
class circle : public Shape{
    public:
    void draw(){
        cout<<"circle way ..... "<<endl;
    }
};
class rectangle: public Shape{
    public:
    void draw(){
        cout<<"rectangle way .... "<<endl;
    }
};

void print(Shape*s){
    s->draw();
}

int main(){

    circle c;
    rectangle r;
    print(&r);
    print(&c);

    // Shape s;
    // print(&s);
    // s.draw();
    // circle c;
    // c.draw();
}