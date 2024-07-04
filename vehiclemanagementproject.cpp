#include<iostream>
using namespace std;
class Vehicle{
    private:
    string make,model;
    int year;
    public:
    void inputData(){
        cout<<"Enter company name:";
        cin>>make;
        cout<<"Enter Model:";
        cin>>model;
        cout<<"Entire year:";
        cin>>year;
    }
    void display(){
        cout<<"Make:"<<make<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"Year:"<<year<<endl;
    }
};
class Car:public Vehicle{
    private:
    int numDoor;
    public:
    void inputData(){
        Vehicle::inputData();
        cout<<"Enter Number of Doors:";
        cin>>number;
    }
    void display(){
        Vehicle::display();
        cout<<"Doors:"<<numDoor<<endl;
    }
};
class ToyotaCar:public Car{
    private:
    string trimLevel;
    
    public:void inputData(){
        Car::inputData();
        cout<<"Enter Trim Level:";
        cin>>TrimLevel;
    }
    void display(){
        cout<<"Trim Level:"<<trimlevel<<endl;
    }
};
main(){
    ToyotaCar myCar;
    cout<<"-----------Input Car Info--------"<<endl;
    myCar.inputData();
    cout<<"----------Output Car Info----------"<<endl;
    myCar.display();
}