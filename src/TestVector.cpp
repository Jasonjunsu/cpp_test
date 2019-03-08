//
// Created by jason on 19-3-8.
//
//There are 4 ways of traversing vector
#include "TestVector.h"
void TestVector::test_vector_traverse() {
    std::vector <int> list;

    //initial the vector using the push_back
    for(int i = 0; i < 10; i++){
        list.push_back(i);
    }

    //for based the range
    for(auto i:list){
        std::cout << i <<  " ";
    }
    std::cout << std::endl;

    //using the index
    for(int i = 0; i < list.size(); i++){
        std::cout << list[i] <<  " ";
    }
    std::cout << std::endl;

    //using the iterator and auto
    for(auto i = list.begin(); i < list.end(); ++i){
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    //using the iterator and explict type
    for(std::vector<int>::iterator i = list.begin(); i < list.end(); ++i){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void TestVector::test_vector_main(){
    test_vector_traverse();
}
