//
//  constangt.cpp
//  operator
//
//  Created by nayeong Go on 10/22/24.
//

#include "constangt.hpp"
#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    int getValue() const {  // 상수 멤버 함수
        return value;       // 멤버 변수 읽기 가능
    }

    void setValue(int v) {
        value = v;          // 상수 함수가 아니므로 값 수정 가능
    }

    // void modifyValue() const {
    //     value = 10;       // 오류: 상수 멤버 함수는 멤버 변수 변경 불가
    // }
};

int main() {
    MyClass obj(5); // 비상수 객체
    std::cout << obj.getValue() << std::endl;  // 출력: 5

    obj.setValue(10);  // 값 수정 가능
    std::cout << obj.getValue() << std::endl;  // 출력: 10
    
    /*
    const MyClass obj(10);  // 상수 객체
    std::cout << obj.getValue() << std::endl;  // 가능: 상수 멤버 함수 호출
    // obj.setValue(20);  // 오류: 상수 객체는 비상수 멤버 함수를 호출할 수 없음
    */
}

