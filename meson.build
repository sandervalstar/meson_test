project('meson_test', 'cpp',
  version : '0.0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

hello_greet_proj = subproject('hello-greet')
hello_greet_dep = hello_greet_proj.get_variable('hello_greet_dep')

subdir('src')
subdir('test')

test('basic', exe)
