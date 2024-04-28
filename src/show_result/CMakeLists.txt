project(show_result)

# 添加动态库
add_library(${PROJECT_NAME}
SHARED
show_result.cpp
)

# 添加包含路径
target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)

# 添加动态库
target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)

# 添加第三方库（位置在MinGW目录下）
target_link_directories(${PROJECT_NAME}
PUBLIC
easyx
)