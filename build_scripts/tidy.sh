#!/usr/bin/env bash

cp build_scripts/run-clang-tidy build/run-clang-tidy
cd build
./run-clang-tidy -fix -j 8 -format -p=. -export-fixes tidy_fixes.yaml '^((?!(subprojects|build|build_scripts)).)*$'
cd ../