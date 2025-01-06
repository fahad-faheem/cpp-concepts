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
        int* milage;

  Car (string car_owner, int car_numberplate, int car_price, string car_color, int car_milage, string car_company ){
        cout << "----- Details -----" << endl;
        owner = car_owner;
        numberplate = car_numberplate;
        price = car_price;
        color = car_color;
        milage = new int (car_milage);
        company = car_company;

    }

 ~Car(){ 
    delete milage;
    cout << "Destructor used when object is destroyed (Free the alocated memory)." << endl;
 }

    void printdata(){
        
        cout << "-----  "<< owner << "  ----- " << "\n"<< endl;
        cout << numberplate << endl;
        cout << price << endl;
        cout << color << endl;
        cout << *milage << endl;
        cout << company << "\n"<< endl;
    }

};


int main (){

    Car Rose_1("Rose1", 8686, 200000, "white", 1800, "Toyota");                                    
    Rose_1.printdata();


    Car Rose_2("Rose2", 8888, 250000, "Red", 2000, "Tesla"); 
    Rose_2.printdata();


    Car Rose_3("Rose3", 1998, 300000, "Blue", 2200, "Bentaly");
    Rose_3.printdata();



    return 0;
}