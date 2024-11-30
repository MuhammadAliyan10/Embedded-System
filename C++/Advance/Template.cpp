#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
};

int main(){
    cout << "Int Sum: " << add(5, 3) << endl;
    cout << "Double Sum: " << add(5.5, 3.3) << endl;
    return 0;

}