project(gilded_rose_kata_test)

set(gtest_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../lib/googletest/googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)
link_directories(../lib)

enable_testing()


set(SOURCE_FILES
        GildedRoseTextTests.cpp
        )

add_executable(code_refactor_test_run ${SOURCE_FILES})

target_link_libraries(code_refactor_test_run gilded_rose_kata_lib)
target_link_libraries(code_refactor_test_run libgtest.a libgtest_main.a)
