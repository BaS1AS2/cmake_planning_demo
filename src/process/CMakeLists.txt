project(process)

# 添加动态库
add_library(${PROJECT_NAME}
SHARED
process.cpp
)

# 添加包含路径
target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_Map_Dir}
)

# 添加动态库
target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)

# 添加第三方库
target_link_libraries(${PROJECT_NAME}
PUBLIC
Eigen3::Eigen
)