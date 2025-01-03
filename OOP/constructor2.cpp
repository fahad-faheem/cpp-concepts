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


};


    void printdata(Car u){              // Passed the parameters of object of a class Car 
        
        cout << "Owner: " << u.owner << endl;
        cout << "Numberplate: " << u.numberplate << endl;
        cout << "Price: " << u.price << endl;
        cout << "Color: " << u.color << endl;
        cout << "Company: " << u.company << endl << endl;

    }


int main (){

    Car Rose1, Rose2;                                         

    printdata (Rose1);      // The Rose1 object is sent to the printdata function as an actual parameter 
    printdata (Rose2);      // The Rose1 object is sent to the printdata function as an actual parameter 

    Car Rose3;

    printdata (Rose3);      // The Rose1 object is sent to the printdata function as an actual parameter                   


    return 0;
}