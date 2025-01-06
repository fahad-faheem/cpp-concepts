#include <iostream>
using namespace std;

class Car {
    private:

        string owner;
        int numberplate;
        int price;
        string color;
        string company;


    public:

    void setdata (string car_owner, string car_color, string car_company, int car_numberplate, int car_price){
        owner = car_owner;
        color = car_color;
        company = car_company;
        numberplate = car_numberplate;
        price = car_price;
    }

    void getdata (){

        cout << "-----" << owner << "-----" << endl << endl;
        cout << numberplate << endl;
        cout << price << endl;
        cout << color << endl;
        cout << company << "\n" << endl;

    }


};



int main (){


    Car Rose_1, Rose_2, Rose_3;


    Rose_1.setdata ("Rose1", "White", "Toyota", 8686, 200000);
    Rose_2.setdata ("Rose2", "Red", "Tesla", 8888, 250000);
    Rose_3.setdata ("Rose3", "Blue", "Bentaly", 1998, 300000);

    Rose_1.getdata();
    Rose_2.getdata();
    Rose_3.getdata();


    return 0;
}