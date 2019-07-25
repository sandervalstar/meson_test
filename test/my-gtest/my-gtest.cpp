#include <gtest/gtest.h>
#include <hello-greet.hpp>

TEST(MyGTest, TestAddition) {
    ASSERT_EQ(2, 1 + 1) << "Oh no, addition no longer works!";
}

TEST(MyGTest, TestHelloGreet) {
    std::string myName = "Sander";
    ASSERT_EQ("Hello " + myName, get_greet(myName))
        << "Oh no, hello-greet is broken!";
}