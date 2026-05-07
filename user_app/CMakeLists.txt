# 在此 CMakeLists 中自动收集本目录及子目录的源文件
# 并通过 PARENT_SCOPE 变量传回给上层 CMakeLists 使用

# 搜索常见的 C/C++/汇编 源文件
file(GLOB_RECURSE USER_APP_SRC_FILES
    CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_LIST_DIR}/*.c"
    "${CMAKE_CURRENT_LIST_DIR}/src/app_elements/*.c"
    #"${CMAKE_CURRENT_LIST_DIR}/*.cpp"
    #"${CMAKE_CURRENT_LIST_DIR}/*.cc"
    #"${CMAKE_CURRENT_LIST_DIR}/*.cxx"
    #"${CMAKE_CURRENT_LIST_DIR}/*.S"
    #"${CMAKE_CURRENT_LIST_DIR}/*.s"
)

# 如果父作用域已经定义了同名变量，则追加，否则创建新变量
if(DEFINED USER_APP_SRCS)
    list(APPEND USER_APP_SRCS ${USER_APP_SRC_FILES})
else()
    set(USER_APP_SRCS ${USER_APP_SRC_FILES})
endif()

# 将收集到的源文件列表导出到父作用域，供上层 CMakeLists 使用
set(USER_APP_SRCS ${USER_APP_SRCS} PARENT_SCOPE)

# 同时把包含目录导回父作用域（如果需要上层添加 include）
set(USER_APP_INC_DIR ${CMAKE_CURRENT_LIST_DIR} PARENT_SCOPE)

