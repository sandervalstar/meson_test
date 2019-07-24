#!/usr/bin/env bash
echo "running gcovr..."
mkdir -p build/coverage_report
gcovr -s -r build -e subprojects -e test -o build/coverage_report/gcov_out.txt
gcovr --html --html-details -r build -e subprojects -e test -o build/coverage_report/index.html

echo "complete reports can be found under build/coverage_report"