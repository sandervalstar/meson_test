project('meson_test', 'cpp',
  version : '0.0.1',
  default_options : ['warning_level=3',
                     'layout=flat',
                     'cpp_std=c++14'])

subdir('src')
subdir('test')

test('basic', exe)
