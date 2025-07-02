#include<iostream>
#include<string>
using namespace std;
class employee{
    protected:
        string name;
        int employeeId;
    
    public:
        employee(string  _name,int _employeedId){
            cout<<"constructor is created "<<endl;
            this->name = _name;
            this->employeeId = _employeedId;
        }

    void  display()const {
        cout<<"employee name is "<<name<<" and id is "<<employeeId<<endl;
    }
};
class projectManager{
    protected:
        string projectManage;
    public:
    projectManager(string _projectManage){
        this->projectManage = _projectManage;
    }
    void manageProject()const {
        cout<<"current we are managing this project "<<projectManage<<endl;
    }
};

class teamLead{
    protected:
        int teamSize;
    
    public:
    teamLead(int _teamSize){
            this->teamSize = _teamSize;
    }
    void leadTeam() const {
        cout<<"lead team is "<<teamSize<<endl;
    }
};
class salesManager : public employee{
    public:
        salesManager(string  _name,int _employeedId) : employee(_name,_employeedId){};
    
    void boostSales() const {
        cout<<this->name<<"and employee id "<<this->employeeId<<endl;
    }

};
class marketingManager : public employee{
    public:
        marketingManager(string  _name,int _employeedId) : employee(_name,_employeedId){};
    
    void createMarketingStategy() const {
        cout<< "marketing manager is "<<this->name<<" and id "<<this->employeeId<<endl;
    }
};
class excutive: public employee{
    public:
    excutive(string  _name,int _employeedId) : employee(_name,_employeedId){};

    void makeExeDecision() const {
        cout<<"the team and i "<<this->name<<" id is "<<this->employeeId<<endl;
    }
};
class programmer: public employee{
    private:
        string progLanguage;
    
    public:
        programmer(string  _name,int _employeedId,string _progLanguage) : employee(_name,_employeedId){
            this->progLanguage = _progLanguage;
        }
    void show() const {
        cout<<"programmer name "<<this->name<<" id "<<this->employeeId<<" working language "<<this->progLanguage<<endl;
    }
};
class hrManager : public employee{
    public:
    hrManager(string  _name,int _employeedId) : employee(_name,_employeedId){};

    void handleHrManager(){
        cout<<"hr Manger "<<this->name<<" id "<<this->employeeId<<endl;
    }
};
class techLead: public employee,projectManager,teamLead{
    public:
    techLead(string  _name,int _employeedId,string projectManage,int teamSize): employee(_name,_employeedId),projectManager(projectManage),teamLead(teamSize){};

    void displayInfo(){
        this->display();
        this->leadTeam();
        this->manageProject();
    }
};
