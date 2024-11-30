#include <iostream>
using namespace std;

class Vehicle{
    public:
    void horn(){
        cout << "Beep! Beep!" << endl;
    }
};

class Car : public Vehicle{
    public:
    void start(){
        cout << "Car started." << endl;
    }

};

int main(){
    Car car1;
    car1.horn();
    car1.start();
    return 0;
}