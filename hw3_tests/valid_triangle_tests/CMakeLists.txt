include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW3ValidTriangleTests-2 valid_triangle_tests.cpp)
target_link_libraries(runHW3ValidTriangleTests-2 hw3_library gtest gtest_main )