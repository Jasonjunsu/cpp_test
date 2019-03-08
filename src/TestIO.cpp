//
// Created by jason on 19-3-9.
//

#include "TestIO.h"
#include <iostream>
#include <fstream>


void TestIO::test_ofstream(){
    std::ofstream f1;
    int arr1[3] = {1,2,3};
    f1.open("/home/jason/ret");
    if (f1){
        for(auto i : arr1){
            f1 << i << " ";
        }
    } else {
        std::cout << "file cant'be open";
    }
    f1.close();
}

void TestIO::test_ifstream() {
    std::ifstream f1;
    int arr1[3];
    f1.open("/home/jason/ret");
    if (f1){
        for(auto i : arr1){
            f1 >> i;
        }
    } else {
        std::cout << "file cant'be open";
    }

    for(auto i : arr1){
        std::cout << i;
    }
    f1.close();
}

void TestIO::test_binary_file(){
    std::ofstream f1;
    f1.open("/home/jason/ret", std::ios::out|std::ios::binary);
    int arr1[3] = {4, 5, 6};
    if (f1){
            f1.write((const char*)arr1, sizeof(int) * 3);
    } else {
        std::cout << "file cant'be open";
    }
    f1.close();
}

void TestIO::test_io_main() {
//    test_ofstream();
//    test_ifstream();
    test_binary_file();
}