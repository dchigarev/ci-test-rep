
set(CMAKE_CXX_STANDARD 17)

add_executable(test 
    ${CMAKE_CURRENT_SOURCE_DIR}/test_main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/test_cpp.cpp)

target_link_libraries(test
    pthread)

target_include_directories(test
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)