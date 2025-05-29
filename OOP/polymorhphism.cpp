#include <iostream>
#include <string>
using namespace std;

// Polymorphism means same function works in different ways depending on the object

class Car {

    protected:

        string owner;           
        int numberplate;            
        int price;
        string color;
        string company;

    public:

    // These functions can be changed in child classes
    virtual void adddata (string car_owner, string car_color, string car_company, int car_numberplate, int car_price){

            owner = car_owner;
            color = car_color;
            company = car_company;
            numberplate = car_numberplate;
            price = car_price;
    }

    virtual void printdata (){

            cout << "-----" << owner << "-----" << endl << endl;
            cout << numberplate << endl;
            cout << price << "/-" << endl;
            cout << color << endl;
            cout << company << "\n" << endl;
    }

};

// Child class 1
class Toyota : public Car {

    public:

    void printdata () override {

            cout << "This is a Toyota Car" << endl;
            cout << "Owner: " << owner << endl;
            cout << "Number Plate: " << numberplate << endl;
            cout << "Price: " << price << "/-" << endl;
            cout << "Color: " << color << endl;
            cout << "Company: " << company << "\n" << endl;
    }

};

// Child class 2
class Tesla : public Car {

    public:

    void printdata () override {

            cout << "This is a Tesla Car" << endl;
            cout << "Owner: " << owner << endl;
            cout << "Number Plate: " << numberplate << endl;
            cout << "Price: " << price << "/-" << endl;
            cout << "Color: " << color << endl;
            cout << "Company: " << company << "\n" << endl;
    }

};

// Child class 3
class Bentley : public Car {

    public:

    void printdata () override {

            cout << "This is a Bentley Car" << endl;
            cout << "Owner: " << owner << endl;
            cout << "Number Plate: " << numberplate << endl;
            cout << "Price: " << price << "/-" << endl;
            cout << "Color: " << color << endl;
            cout << "Company: " << company << "\n" << endl;
    }

};


int main (){

    // Using base class pointer for different child class objects
    Car* Rose_1 = new Toyota();                                      
    Car* Rose_2 = new Tesla();                                      
    Car* Rose_3 = new Bentley();                                    

    // Adding data
    Rose_1->adddata ("Rose1", "White", "Toyota", 8686, 200000); 
    Rose_2->adddata ("Rose2", "Red", "Tesla", 8888, 250000);
    Rose_3->adddata ("Rose3", "Blue", "Bentley", 1998, 300000);

    // Printing data (each object uses its own version of the function)
    Rose_1->printdata ();                                       
    Rose_2->printdata ();        
    Rose_3->printdata ();  

    return 0;
}
