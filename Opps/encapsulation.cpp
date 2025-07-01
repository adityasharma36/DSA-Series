#include<iostream>
#include<string>
using namespace std;
class Student{

    private:
        string name;
        int rollNo;
        string GF;
        int *age;

    public:

        // set function 
        void setVal(int ag){
            *this->age = ag;
        };

        // get function
        int getVal() const{
            return *this->age;
        }

        // if call this name get this 

        string getName() const{
            return this->name;
        }

        // if call this function get this 
        int getRol() const{
            return this->rollNo;
        }

        // if call this fuction get this
        string getGf() const{
            return this->GF;
        }

        void getChatting() {
            gfChatting();
        }
    
    // null construcuto or default constructor
        Student(){
            cout<<"constructor is call "<<endl;
        }

        // parameter constructor 

        Student(string name,int rollNo,string GF,int age){
            this->name = name;
            this->rollNo = rollNo;
            this->GF = GF;
            this->age = new int(age);
        }

        // copy constructor 

        Student(const Student & obj){
            this->age = obj.age;
            this->GF = obj.GF;
            this->name = obj.name;
            this->rollNo = obj.rollNo;
        }

        // behaviour 

        void eat(){
            cout<<"yes"<<" "<<this->name<<endl;
        }

        ~Student(){
            cout<<"deconstructor is call "<<endl;
            delete this->age;
        }
        private:
        void gfChatting(){
            cout<<"yes "<<this->GF<<endl;
        }

        // deconstructor

};

int main(){

    Student A("atharv",60,"sonam",18);
    A.setVal(18);
    cout<<A.getName()<<endl;
    cout<<A.getGf()<<endl;
    cout<<A.getVal()<<endl;
    cout<<A.getRol()<<endl;

    A.getChatting();
}