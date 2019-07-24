#include "hello-greet.hpp"
#include <string>

std::string get_greet(const std::string& who) { return "Hello " + who; }

std::string get_something() { return "Something"; }