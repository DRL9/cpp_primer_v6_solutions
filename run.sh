find src -name *.cpp -type f | sort | awk -F / '{print "add_executable("$2 "_" $3 " " $0")"}' | pbcopy
