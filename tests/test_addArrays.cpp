#include <gtest/gtest.h>
#include <array/array.h>  // Include the correct header

TEST(AddArrays, BasicTest) {
    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {4, 5, 6};
    std::vector<int> result = array::addArrays(arr1, arr2);  // Use the correct namespace
    std::vector<int> expected = {5, 7, 9};
    ASSERT_EQ(result, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
