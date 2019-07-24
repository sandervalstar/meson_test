#include <iostream>
#include "hello-greet.hpp"

int main(int argc, char **argv) {
    std::cout << "Hello World & " << get_greet("Sander") << ".\n";
    return 0;
}
