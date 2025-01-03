#include <iostream>
#include <string>
using namespace std;

class Car {
    private:

        string password;
        string model;

    public:
        string owner;
        int numberplate;
        int price;
        string color;
        string company;

    Car (string car_owner){                                         //Initializing values to object using constructor
        cout << "----- Details -----" << endl;
        owner = car_owner;
        numberplate = 8888;
        price = 200000;
        color = "white";
        company = "Toyota";

    }


};


    void printdata(Car u){              // Passed the parameters of object of a class Car 
        
        cout << "Owner: " << u.owner << endl;
        cout << "Numberplate: " << u.numberplate << endl;
        cout << "Price: " << u.price << endl;
        cout << "Color: " << u.color << endl;
        cout << "Company: " << u.company << endl << endl;

    }


int main (){

    Car Rose1("Rose1"), Rose2("Rose2");         // owners name is sent to parameterized constructor                               

    printdata (Rose1);       
    printdata (Rose2);      

    Car Rose3("Rose3");                       // owner name is sent to parameterized constructor 

    printdata (Rose3);     


    return 0;
}