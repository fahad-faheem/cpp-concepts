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


    Car Rose_1, Rose_2, Rose_3;             // Declaration of Objects of a class Car. 

    Rose_1.owner = "Rose1";                // Use objectName.member to access and modify the members of an object of a class
    Rose_1.numberplate = 8686;
    Rose_1.price = 200000;
    Rose_1.color = "White";
    Rose_1.company = "Toyota";

    Rose_2.owner = "Rose2";
    Rose_2.numberplate = 8888;
    Rose_2.price = 250000;
    Rose_2.color = "Red";
    Rose_2.company = "Tesla";

    Rose_3.owner = "Rose3";
    Rose_3.numberplate = 1998;
    Rose_3.price = 300000;
    Rose_3.color = "Blue";
    Rose_3.company = "Bentaly";


    Rose_1.printdata();
    Rose_2.printdata();
    Rose_3.printdata();



    return 0;
}