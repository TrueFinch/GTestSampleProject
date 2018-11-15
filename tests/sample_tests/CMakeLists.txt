include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(sample_tests_run
        SampleTestFixture.cpp
        )

target_link_libraries(sample_tests_run gtest gtest_main gmock gmock_main)
target_link_libraries(sample_tests_run ${CMAKE_PROJECT_NAME}_lib)