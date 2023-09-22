#include "include/task.hpp"
#include <iostream>

using namespace MAI::OOP::Lab1;

int main() {
    int64_t input_num;
    std::cout << "Input the number: ";
    std::cin >> input_num;
    Solution::task(input_num);
    
    return 0;
}