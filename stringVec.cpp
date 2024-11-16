//
//  stringVec.cpp
//  operator
//
//  Created by nayeong Go on 10/23/24.
//

// #include "stringVec.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
    vector<string> vec2;
    vec2.push_back("Milk");
    vec2.push_back("Jam");
    vec2.push_back("Bread");
    vec2.push_back("Butter");
    for (auto &e: vec2) {
        cout << " " << e;
    }
    cout << endl;
    return 0;
}
