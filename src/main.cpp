#include <iostream>
#include "hello-greet.hpp"

#define PROJECT_NAME "meson_test"

int main(int argc, char **argv) {
    if (argc != 1) {
        std::cout << argv[0] << "takes no arguments.\n";
        return 1;
    }
    std::cout << "This is project " << PROJECT_NAME << ".\n";

    std::cout << get_greet("Sander") << ".\n";
    return 0;
}
