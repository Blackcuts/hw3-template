include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW3TriangleBasicTests-1 triangle_basic_tests.cpp)
target_link_libraries(runHW3TriangleBasicTests-1 hw3_library gtest gtest_main)
