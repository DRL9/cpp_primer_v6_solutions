cmakefile="./CMakeLists.txt"
# 删除原来的行
sed -i '' '/add_executable.*/d' $cmakefile
# 添加全量的行
find src -name *.cpp -type f | sort | awk -F / '{print "add_executable("$2 "_" $3 " " $0")"}' >>$cmakefile
