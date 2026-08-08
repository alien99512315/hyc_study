cmake_minimum_required(VERSION 3.10)

# 项目名称
project(YuchaoCppExercises)

# 设置 C++ 标准，入门基础语法 C++11 足矣
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 由于这四个基础练习每个都有自己独立的 main() 函数，
# 我们需要为它们分别编译出四个独立的可执行文件。
# (注意：如果仓库里源文件的命名不同，请将后面的 .cpp 替换为您实际的文件名)

add_executable(bbb src/aaa.cpp)
