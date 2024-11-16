//
//  stdarray.cpp
//  operator
//
//  Created by nayeong Go on 10/23/24.
//

#include "stdarray.hpp"
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 3> list{1,2,3};
    for (int i=0; i<list.size(); ++i)
        ++list[i];
    for (auto& elem : list)
        cout << elem << " ";
    cout << endl;
    return 0;
}
