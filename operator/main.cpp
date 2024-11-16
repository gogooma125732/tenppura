//
//  main.cpp
//  operator
//
//  Created by nayeong Go on 10/19/24.
//

#include <iostream>
#include <memory>
using namespace std;


class Car {
private:
    int speed; int gear; string color;
public:
    Car(){
        cout << "디폴트 생성자 호출" << endl;
        speed = 0;
        gear = 1;
        color = "white";
    }
    int getSpeed() {
        return speed;
    }
    int getGear();
    string getColor();
};

int Car::getGear() {return gear;}
string Car::getColor() {return color;}

void swap(int *a, int *b){
    cout << "this is initial setting" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    int tmp;
    tmp = *a;
    cout << "after tmp=*a;" << endl;
    cout << "a: " << a << endl;
    cout << "*a: " << *a << endl;
    cout << "tmp: " << tmp << endl;
    cout << "b: " << b << endl;
    cout << "*b: " << *b << endl;
    *a = *b;
    cout << "after *a=*b;" << endl;
    cout << "a: " << a << endl;
    cout << "*a: " << *a << endl;
    cout << "tmp: " << tmp << endl;
    cout << "b: " << b << endl;
    cout << "*b: " << *b << endl;
    *b = tmp;
    cout << "after *b=tmp;" << endl;
    cout << "a: " << a << endl;
    cout << "*a: " << *a << endl;
    cout << "tmp: " << tmp << endl;
    cout << "b: " << b << endl;
    cout << "*b: " << *b << endl;
}

int main() {
    int m = 2, n = 9;
    cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
    cout << "this is before swap" << endl;
    cout << "&m: " << &m << endl;
    cout << "&n: " << &n << endl;
    swap(&m, &n);
    cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
    cout << "this is after swap" << endl;
    cout << "m: " << m << "n: " << n << endl;
    cout << "&m: " << &m << endl;
    cout << "&n: " << &n << endl;
}
