#include <iostream>
using namespace std;

class Car {

    private:

        string owner;
        int numberplate;
        int price;
        string color;
        string company;

    protected:

        int passkey = 8818;

    public:

        friend void setdata (Car& o, string car_owner, string car_color, string car_company, int car_numberplate, int car_price);
        friend void printdata (Car& obj);

    
};

void setdata (Car& obj, string car_owner, string car_color, string car_company, int car_numberplate, int car_price){

        obj.owner = car_owner;
        obj.color = car_color;
        obj.company = car_company;
        obj.numberplate = car_numberplate;
        obj.price = car_price;
};

void printdata (Car& obj){

        cout << "-----" << obj.owner << "-----" << endl << endl;
        cout << obj.numberplate << endl;
        cout << obj.price << endl;
        cout << obj.color << endl;
        cout << obj.passkey << endl;
        cout << obj.company << "\n" << endl;

    };


int main (){

    Car Rose_1, Rose_2, Rose_3;

        setdata (Rose_1, "Rose1", "White", "Toyota", 8686, 200000);
        setdata (Rose_2, "Rose2", "Red", "Tesla", 8888, 250000);
        setdata (Rose_3, "Rose3", "Blue", "Bentaly", 1998, 300000);

        printdata (Rose_1);
        printdata (Rose_2);
        printdata (Rose_3);

    return 0;
}