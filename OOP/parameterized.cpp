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

    Car (string car_owner){                              // car owner get actual parameters when object is created 
        cout << "----- Details -----" << endl;           // And owner name properties is assign to that parameter
        owner = car_owner;
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

    Car Rose1("Rose1"), Rose2("Rose2");                       // "Rose1" and "Rose2" is sent to parameterized constructor 
        cout << "\n";                                         // and paramertized constructor assign it to owner name

        cout << "Owner: " << Rose1.owner << endl;
        cout << "Numberplate: " << Rose1.numberplate << endl;
        cout << "Price: " << Rose1.price << endl;
        cout << "Color: " << Rose1.color << endl;
        cout << "Company: " << Rose1.company << endl << endl;
    
        cout << "Owner: " << Rose2.owner << endl;
        cout << "Numberplate: " << Rose2.numberplate << endl;
        cout << "Price: " << Rose2.price << endl;
        cout << "Color: " << Rose2.color << endl;
        cout << "Company: " << Rose2.company << endl << endl;

    Car Rose3("Rose3");                                     // "Rose3" is sent to patameterized constructor 

        cout << "\n";

        cout << "Owner: " << Rose3.owner << endl;
        cout << "Numberplate: " << Rose3.numberplate << endl;
        cout << "Price: " << Rose3.price << endl;
        cout << "Color: " << Rose3.color << endl;
        cout << "Company: " << Rose3.company << endl;

    return 0;
}