#include <gtest/gtest.h>
#include "../include/task.hpp"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(1) == "00000000000000000000000000000001");
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(0) == "00000000000000000000000000000000");
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(14) == "00000000000000000000000000001110");
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(-14) == "10000000000000000000000000001110");
}

TEST(test_05, basic_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(2147483647) == "01111111111111111111111111111111");
}

TEST(test_06, basic_test_set)
{
    ASSERT_TRUE(MAI::OOP::Lab1::Solution::task(-2147483647) == "11111111111111111111111111111111");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}