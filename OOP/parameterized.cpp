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

  Car (string car_owner){                             
        cout << "----- Details -----" << endl;           
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
        cout << company << "\n"<< endl;
    }

};


int main (){

    Car Rose_1("Rose1"), Rose_2("Rose2");                                         

    Rose_1.printdata();
    Rose_2.printdata();


    Car Rose_3("Rose3");
    Rose_3.printdata();



    return 0;
}