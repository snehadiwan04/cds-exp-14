// sneha diwan
// 23070123126
// entc b2
// experment 13
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string company = "Aston Martin";

    void type() {
        cout << "911 Mustang" << endl;
    }
};

class Specs {
public:
    string mileage = "8 kmpl";

    void colour() {
        cout << "Grey" << endl;
    }
};


class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";
};

int main() {

    Car f2;


    f2.type();       
    f2.colour();      


    cout << "Company: " << f2.company << endl;
    cout << "Mileage: " << f2.mileage << endl;
    cout << "Seater: " << f2.seater << endl;

    return 0;
}

/*
Output 
 911 Mustang
Grey
Company: Aston Martin
Mileage: 8 kmpl
Seater: 4 seater


=== Code Execution Successful ===


*/
