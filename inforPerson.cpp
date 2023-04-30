#include<iostream>
#include<string>
using namespace std;
#define currentYear 2023
class Human{
    private:
        string name;
        int age;
        string address;
        int yearBorn;
    public:
        Human(string name,string address, int yearBorn);
        int calcOld();
        void display();
};
Human::Human(string name, string address, int yearBorn){
    this->name = name;
    this->address = address;
    this->yearBorn = yearBorn;
}
int Human::calcOld(){
    return this->age = currentYear - this->yearBorn;
}
void Human::display(){
    cout<<"Informations: "<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Age: "<<this->calcOld()<<endl;
    cout<<"Address: "<<this->address<<endl;
}
int main(){
    Human human("Hung","Thu Duc", 2002);
    human.display();
    return 0;
}