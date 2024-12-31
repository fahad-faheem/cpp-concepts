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


    Car fahadcar, imamcar, monafcar;

    fahadcar.owner = "Fahad";
    fahadcar.numberplate = 8686;
    fahadcar.price = 200000;
    fahadcar.color = "white";
    fahadcar.company = "Toyota";

    imamcar.owner = "Imam";
    imamcar.numberplate = 8888;
    imamcar.price = 250000;
    imamcar.color = "white";
    imamcar.company = "Tesla";

    monafcar.owner = "Monaf";
    monafcar.numberplate = 1998;
    monafcar.price = 300000;
    monafcar.color = "white";
    monafcar.company = "Bentaly";


    fahadcar.printdata();
    imamcar.printdata();
    monafcar.printdata();



    return 0;
}