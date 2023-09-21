#include "include/task.hpp"
#include <iostream>

int main() {
    int64_t input_num;
    std::cout << "Input the number: ";
    std::cin >> input_num;
    MAI::OOP::Lab1::Solution::task(input_num);
    
    return 0;
}