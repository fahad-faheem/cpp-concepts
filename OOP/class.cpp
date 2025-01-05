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

    void printdata(){
        cout << "-----  "<< owner << "  ----- " << "\n"<< endl;
        cout << numberplate << endl;
        cout << price << endl;
        cout << color << endl;
        cout << company << "\n\n"<< endl;
    }

};


int main (){


    Car ROSE1, ROSE2, ROSE3;

    ROSE1.owner = "Rose1";
    ROSE1.numberplate = 8686;
    ROSE1.price = 200000;
    ROSE1.color = "white";
    ROSE1.company = "Toyota";

    ROSE2.owner = "Rose2";
    ROSE2.numberplate = 8888;
    ROSE2.price = 250000;
    ROSE2.color = "white";
    ROSE2.company = "Tesla";

    ROSE3.owner = "Rose3";
    ROSE3.numberplate = 1998;
    ROSE3.price = 300000;
    ROSE3.color = "white";
    ROSE3.company = "Bentaly";


    ROSE1.printdata();
    ROSE2.printdata();
    ROSE3.printdata();



    return 0;
}