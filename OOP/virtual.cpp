#include <iostream>
#include <string>
using namespace std;

class Car {                    

    private:

        string owner;           
        int numberplate;            
        int price;
        string color;
        string company;

    protected:

        int password = 8818;

    public:

     virtual void messege () {       // virtual function will execute if in objects this name function is not availble 
        cout << "Car details" << endl;
     }

    void adddata (string car_owner, string car_color, string car_company, int car_numberplate, int car_price){

            owner = car_owner;
            color = car_color;
            company = car_company;
            numberplate = car_numberplate;
            price = car_price;


    };

    void printdata (){

            cout << "-----" << owner << "-----" << endl << endl;
            cout << numberplate << endl;
            cout << price << endl;
            cout << color << endl;
            cout << company << "\n" << endl;

    };

   
};

class Car1:public Car {
    public:
    void messege (){
        cout << "Rose1 car details" << endl;
    }
};

class Car2:public Car {
    public:
    void messege (){
        cout << "Rose2 car details" << endl;
    }
};

class Car3:public Car {
    public:
    void messege (){
        cout << "Rose3 car details" << endl;
    }
};



int main (){

    string input;

    Car1 Rose_1;
    Car2 Rose_2;
    Car3 Rose_3;

    Rose_1.adddata ("Rose1", "White", "Toyota", 8686, 200000);
    Rose_1.messege();
    Rose_1.printdata();

    Rose_2.adddata ("Rose2", "Red", "Tesla", 8888, 250000);
    Rose_2.messege();
    Rose_2.printdata();

    Rose_3.adddata ("Rose3", "Blue", "Bentaly", 1998, 300000);
    Rose_3.messege();
    Rose_3.printdata();
    
    return 0;
}