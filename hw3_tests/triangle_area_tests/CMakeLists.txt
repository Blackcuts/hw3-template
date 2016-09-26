include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW3TriangleAreaTests-4 triangle_area_tests.cpp)
target_link_libraries(runHW3TriangleAreaTests-4 hw3_library gtest gtest_main)
