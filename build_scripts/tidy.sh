#!/usr/bin/env bash

cp build_scripts/run-clang-tidy.py build/run-clang-tidy.py
cd build
./run-clang-tidy.py -fix -j 8 -format -p=. -export-fixes tidy_fixes.yaml '^((?!(subprojects|build|build_scripts)).)*$'
cd ../