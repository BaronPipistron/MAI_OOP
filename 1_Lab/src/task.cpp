#include "../include/task.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>

std::string MAI::OOP::Lab1::Solution::toBIN(int64_t num) {
    std::string res {""};

    while (num > 0) {
        res += std::to_string(num % 2);
        num /= 2;
    }
    return res;
}

std::string MAI::OOP::Lab1::Solution::task(int64_t num) {
    if (num > MAX_32_BIT_NUM) {
        throw std::invalid_argument("Input number must be smaller or equal MAX_32_BIT_NUM and bigger or equal MIN_32_BIT_NUM");
    }

    if (num < MIN_32_BIT_NUM) {
        throw std::invalid_argument("Input number must be smaller or equal MAX_32_BIT_NUM and bigger or equal MIN_32_BIT_NUM");
    }

    std::string res {""};
    res += toBIN(std::abs(num));
    
    while (res.length() != 31) {
        res += "0";
    }

    if (num < 0) {
        res += "1";
    } else {
        res += "0";
    }

    std::reverse(res.begin(), res.end());
    std::cout << "The resulting number in binary notation: " << res << std::endl;
    return res;
}