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

    Car (){                                         //Initializing values to object using constructor
        cout << "----- Details -----" << endl;
        owner = "Rose";
        numberplate = 8888;
        price = 200000;
        color = "white";
        company = "Toyota";

    }

    void printdata(){
        
        cout << "-----  "<< owner << "  ----- " << "\n"<< endl;
        cout << numberplate << endl;
        cout << price << endl;
        cout << color << endl;
        cout << company << "\n\n"<< endl;
    }

};


int main (){

    Car Rose_1, Rose_2;               // the constructor is called where the object is created                               

    Rose_1.printdata();
    Rose_2.printdata();


    Car Rose_3;
    Rose_3.printdata();



    return 0;
}