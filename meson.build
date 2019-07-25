project('meson_test', 'cpp',
  version : '0.0.1',
  default_options : ['warning_level=3',
                     'b_coverage=true',
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

#run_target('tidy',
#  command : ['clang-tidy', 'src/main.cpp', '-p='+ meson.build_root()])

# regex = '^(src|test).*$'
regex = '^((?!(subprojects)).)*$'
# This adds clang tidy support
#configure_file(input : 'run-clang-tidy.py',
#               output : 'run-clang-tidy.py',
#               configuration : configuration_data())
run_target('tidy',
  command: ['./build_scripts/tidy.sh'])
  # command : ['build/run-clang-tidy.py','-fix', '-j' , '8' ,'-format', '-p='+ meson.build_root(), '-export-fixes', 'tidy_fixes.yaml', regex])
  # command : ['run-clang-tidy.py','-fix', '-j' , '8', 'files', regex ,'-format', '-p='+ meson.build_root(), '-export-fixes', 'tidy_fixes.yaml'])
  # command : ['run-clang-tidy.py','-fix', '-j' , '8', 'files', regex ,'-format', '-p='+ meson.build_root()])
