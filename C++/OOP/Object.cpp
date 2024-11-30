#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    int speed;
    void display(){
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main(){
    Car car1;
    car1.brand  = "BMW";
    car1.speed = 200;
    car1.display();
    return 0;
}