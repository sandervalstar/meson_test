#include <gtest/gtest.h>

TEST(MyGTest, TestAddition) {
    ASSERT_EQ(2, 1 + 1) << "Oh no, addition no longer works!";
}