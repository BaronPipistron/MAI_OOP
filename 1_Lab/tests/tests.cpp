#include <gtest/gtest.h>
#include "../include/task.hpp"

TEST(task_func_test, basic_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(1) == "00000000000000000000000000000001");
}

TEST(task_func_test, param_null_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(0) == "00000000000000000000000000000000");
}

TEST(task_func_test, random_param_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(14) == "00000000000000000000000000001110");
}

TEST(task_func_test, negative_param_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(-14) == "10000000000000000000000000001110");
}

TEST(task_func_test, max_32_bit_int_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(2147483647) == "01111111111111111111111111111111");
}

TEST(task_func_test, min_32_bit_int_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(-2147483647) == "11111111111111111111111111111111");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}