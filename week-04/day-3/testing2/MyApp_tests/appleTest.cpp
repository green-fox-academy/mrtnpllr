#include <gtest/gtest.h>
#include "Apple.h"

/*
TEST(apple_check, test_apple){
    EXPECT_EQ(getApple(), "apple");
}
*/


TEST(apple_check, check_sums) {
    std::vector<int> vector = {1,1,1,2};
    EXPECT_EQ(getSum(vector), 5);
}

TEST(apple_check, check_sum_empty) {
    std::vector<int> vector;
    EXPECT_EQ(getSum(vector), 0);
}

TEST(apple_check, check_sum_oneElement) {
    std::vector<int> vector = {10};
    EXPECT_EQ(getSum(vector), 10);
}

TEST(apple_check, check_negative_sum){
    std::vector<int> vector = {-3, -5, -2, -5};
    EXPECT_EQ(getSum(vector), -15);
}
