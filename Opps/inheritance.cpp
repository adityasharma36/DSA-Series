#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
        string name;
        int noOfDoor;
        string model;
    
    // create constructor 
    vehicle(string _name,int _noOfDoor,string  _model){
        cout<<"Vehicle constructor is create "<<endl;
        this->name = _name;
        this->noOfDoor = _noOfDoor;
        this->model = _model;
    }

    // create function 

    void start_engine(){
        cout<<"engine start "<<this->name <<" "<<this->model<<endl;
    }
    void stop_engine(){
        cout<<this->name <<" engine stop "<<this->model<<endl;
    }
};

class Car : public vehicle{
    public:
        int noOfTyres;
        string transmission;

    // create construtor

    Car(string _name,int _noOfDoor,string  _model,int _noOfTyres,string _transmission) : vehicle(_name,_noOfDoor,_model){
        cout<<"Car constructor is create "<<endl;
        this->noOfTyres = _noOfTyres;
        this->transmission = _transmission;
    }

    // create function of behaviour

    void acStart(){
        cout<<"Ac start in "<<this->name<<" "<<this->model<<endl;
    }
};

int main(){
    Car c("maruti 800",4,"XlR",4,"mannual");
    c.start_engine();
    c.acStart();
    c.stop_engine();

}