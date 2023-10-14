# Find the GTest package
find_package(GTest REQUIRED)

# Add the tests
add_executable(leetcode75Tests test_addArrays.cpp)

# Link GTest and your 'array' module to the tests
target_link_libraries(leetcode75Tests GTest::GTest GTest::Main array)

# Register the tests
include(GoogleTest)
gtest_discover_tests(leetcode75Tests)
