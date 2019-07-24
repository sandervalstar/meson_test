project('hello-greet', 'cpp', default_options : ['cpp_std=c++14'],
        version : '0.0.1')

hello_greet = library('hello-greet', sources : ['hello-greet.hpp', 'hello-greet.cpp'])
inc = include_directories('.')

hello_greet_dep = declare_dependency(include_directories : inc,
  link_with : hello_greet)