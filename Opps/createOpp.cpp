#include<iostream>
#include<string>
using namespace std;
class Student{
    public:

    // property of student
    int age ;
    string name;
    int id;
    int * ro;

    // create default constructor 

    Student(){
        cout<<"constructor is created "<<endl;
    }

    // create Parameter Constructor 

    Student(int age ,string name,int id ,int roN){
        cout<<"parameter constructor is created "<<endl;
        this->age = age;
        this->name = name;
        this->id = id;
        this->ro = new int(roN);
    }


    // copy constructor 

    Student(const Student & obj){
        this->age = obj.age;
        this->name = obj.name;
        this->id = obj.id;
        this->ro = obj.ro;
    }

    void eat(){
        cout<<"yes this student is eating a lot "<<this->name<<endl;

    }
    void roll(){
        cout<<"this roll number is "<<this->ro<<endl;
    }
    ~Student(){
        cout<<"the destructor is call "<<endl;
        delete this->ro;
    }


};
int main(){

    // default constructor 

    // Student A;
    // A.age = 12;
    // A.name = "rohit";
    // A.id = 01;
    // A.roN = 1;
    
    // A.eat();

    // Student B;
    // B.age = 15;
    // B.name = "kamlesh";
    // B.id = 02;
    // B.roN = 2;

    // B.roll();

    // paraMeter Constructor

    // giving parameter to constructor 
    // Student A(12,"rohit",01,1);

    // Student B(15,"garv",01,21);

    // // print the given names 
    // cout<<"student name "<<A.name<<"and age is "<<A.age<<endl;

    // // print behaviour 
    // A.eat();
    // B.roll();

    // Student C= A;
    // cout<<C.age<<" "<<A.age<<endl;


    // dynamic allocation 

    Student * A = new Student(14,"aditya",01,1);
    cout<<A->age<<endl;
    cout<<A->name<<endl;
    A->eat();
    cout<<*(A->ro)<<endl;
    delete A;
   
    return 0;
}