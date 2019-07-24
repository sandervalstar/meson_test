#include "math.hpp"
#include <gtest/gtest.h>

TEST(MyMathTest, TestAddition) {
    ASSERT_EQ(2, add(1, 1)) << "Oh no, addition no longer works!";
}
