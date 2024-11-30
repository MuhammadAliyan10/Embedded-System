#include <iostream>
using namespace std;

int main(){
    int age = 17;
    if (age >= 18){
        cout << "You are an adult." << endl;
    }
    else if(age >= 15 && age < 18){
        cout << "You are a teenager." << endl;
    }
    else{
        cout << "You are a child." << endl;
    }
    return 0;
}