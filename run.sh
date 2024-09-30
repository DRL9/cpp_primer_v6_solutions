find src -name *.cpp -type f | awk -F / '{print "add_executable("$2 "_" $3 " " $0")"}'
