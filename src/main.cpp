#include <hello-greet.hpp>
#include <iostream>
#include "math.hpp"

#define PROJECT_NAME "meson_test"

int main(int argc, char **argv) {
    if (argc != 1) {
        std::cout << argv[0] << "takes no arguments.\n";
        return 1;
    }
    std::cout << "This is project " << PROJECT_NAME << ".\n";

    std::string myName = "Sander";
    std::cout << get_greet(myName) << ".\n";

    std::cout << "1 + 2 = " << add(1, 2) << ".\n";
    return 0;
}
