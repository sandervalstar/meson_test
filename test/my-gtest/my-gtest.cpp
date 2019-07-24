#include <gtest/gtest.h>
#include <hello-greet.hpp>

TEST(MyGTest, TestAddition) {
    ASSERT_EQ(2, 1 + 1) << "Oh no, addition no longer works!";
}

TEST(MyGTest, TestHelloGreet) {
    ASSERT_EQ("Hello Sander", get_greet("Sander"))
        << "Oh no, hello-greet is broken!";
}