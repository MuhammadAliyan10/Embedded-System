#include <iostream>
using namespace std;

class Circle {
public:
    virtual void draw() {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Circle {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Circle* circle;
    Square square;
    circle = &square;
    circle->draw();
    return 0;
}
