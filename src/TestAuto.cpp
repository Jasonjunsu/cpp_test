//
// Created by jason on 19-3-8.
//

#include "TestAuto.h"
#include <iostream>
#include <typeinfo>
#include <vector>

void TestAuto::test_auto_main() {
    int i = 1;
    auto a1 = i;
    auto a2 = a1 + 2;
    std::cout <<  "a2 type is " << typeid(a2).name() << std::endl;
    std::cout << a2 << std::endl;

    int array1[3] = {1, 2, 3};
    auto array2 = array1;

    std::cout << array2[1] << std::endl;
    //array2 is int*
    std::cout << typeid(array2).name() << std::endl;

    std::vector<int> v1(3);

    auto t = v1.begin();
    std::cout << typeid(t).name() << std::endl;

    auto v2 = v1;
    for(auto vv : v2){
        std::cout << vv << "_";
    }
    std::cout << std::endl;
}