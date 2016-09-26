include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runHW3TriangleDeterminingTests-5 triangle_determining_tests.cpp)

target_link_libraries(runHW3TriangleDeterminingTests-5 hw3_library gtest gtest_main )