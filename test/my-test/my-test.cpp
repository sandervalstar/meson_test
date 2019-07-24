#include <hello-greet.hpp>
#include <iostream>

int main(int argc, char **argv) {
    std::cout << "Hello World & " << get_greet("Sander") << ".\n";
    return 0;
}
