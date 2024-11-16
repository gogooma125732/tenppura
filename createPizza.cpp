//
//  createPizza.cpp
//  operator
//
//  Created by nayeong Go on 10/23/24.
//

#include "createPizza.hpp"
#include <iostream>
using namespace std;

class Pizza {
public:
    Pizza(int s) : size(s) {}
    int size;
};

Pizza createPizza() {
    Pizza p(10);
    return p;
} // size=10인 Pizza 객체를 반환하는 함수 createPizza()

int main() {
    Pizza pizza = createPizza(); // createPizza()결과 객체 pizza는 size=10을 갖는 Pizza클래스의 객체.
    cout << pizza.size << "인치피자" << endl;
    
    return 0;
}
