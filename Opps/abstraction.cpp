#include<iostream>
#include "bird.h"
using namespace std;
void birdProperty(Bird*&bird){
    bird->eat();
    bird->sleep();
    bird->eat();
    bird->sleep();
    bird->eat();

};
int main(){

    Bird * bird = new Sparrow();
    birdProperty(bird);
    Bird * bird2 = new eagle();
    birdProperty(bird2);

}
