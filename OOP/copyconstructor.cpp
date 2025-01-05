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

  Car (string car_owner, int car_numberplate, int car_price, string car_color, string car_company){                             
        cout << "----- Details -----" << endl;           
        owner = car_owner;
        numberplate = car_numberplate;
        price = car_price;
        color = car_color;
        company = car_company;

    }

    Car (Car &obj){                // copy constructor     // the & is reference to an existing object data

        cout << "----- Details -----" << endl;  
        owner = obj.owner;                     
        numberplate = obj.numberplate;          
        price = obj.price;
        color = obj.color;
        company = obj.company;

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

    Car Rose_1("Rose1", 8686, 200000, "white", "Toyota");                                    
    Rose_1.printdata();


    Car Rose_2("Rose2", 8888, 250000, "Red", "Tesla"); 
    Rose_2.printdata();


    Car Rose_3 = Rose_1;      // Syntax   // Rose_3 is new object with the data of Rose_1
    Rose_3.printdata();


    cout << "Note: Rose_1 and Rose_3 are two separate objects" << endl;

    return 0;
}