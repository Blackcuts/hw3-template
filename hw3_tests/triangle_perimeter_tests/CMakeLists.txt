include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW3TrianglePerimeterTests-3 triangle_perimeter_tests.cpp)
target_link_libraries(runHW3TrianglePerimeterTests-3 hw3_library gtest gtest_main )