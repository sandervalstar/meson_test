project('meson_test', 'cpp',
    version : '0.0.1',
    default_options : ['warning_level=3',
                     'b_coverage=true',
                     'layout=mirror',
                     'cpp_std=c++14'])

# === dependencies ===
hello_greet_proj = subproject('hello-greet')
hello_greet_dep = hello_greet_proj.get_variable('hello_greet_dep')
# === end dependencies ===
subdir('src')

# === test dependencies ===
gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_main_dep')
if not gtest_dep.found()
  error('MESON_SKIP_TEST: gtest not installed.')
endif
# === end test dependencies ===
subdir('test')

run_target('cov',
    command : './build_scripts/get_coverage_percentages')

run_target('clang-tidy',
    command: ['./build_scripts/tidy.sh'])

run_target('cppcheck', command : ['cppcheck', 
    '--enable=all', '--std=c++14', '--error-exitcode=1', '--suppress=missingInclude',
    'src', 'test'])