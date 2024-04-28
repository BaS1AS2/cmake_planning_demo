cmake_minimum_required(VERSION 3.20.0)

# 设置详细项目名
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/BaS1AS2/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)

# 设置动态库和可执行文件的输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 设置子目录路径
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_Result_Dir ${CMAKE_SOURCE_DIR}/src/show_result)

# 三方库
set(EIGEN3_INCLUDE_DIR "D:/ProgramData/eigen-git-mirror-master")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

find_package(Eigen3 REQUIRED)
if(TARGET Eigen3::Eigen)
    message(STATUS "***** Eigen3 found in ${EIGEN3_INCLUDE_DIR} *****")
endif()

# 添加子目录
add_subdirectory(src)