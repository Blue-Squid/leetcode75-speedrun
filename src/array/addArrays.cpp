// src/array/add_two_arrays.cpp

// addArrays.cpp
#include "array/array.h"

namespace array {
    std::vector<int> addArrays(const std::vector<int>& array1, const std::vector<int>& array2) {
        // Your implementation here
        std::vector<int> result;

        // Perform the addition of corresponding elements from array1 and array2
        // and store the result in the 'result' vector.

        // Make sure the input vectors are of the same length for this example.
        if (array1.size() != array2.size()) {
            // Handle the error or mismatched input lengths.
            // You can throw an exception or return an error code as needed.
        } else {
            for (size_t i = 0; i < array1.size(); ++i) {
                result.push_back(array1[i] + array2[i]);
            }
        }

        return result;
    }
}
