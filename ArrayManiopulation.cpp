#include <iostream>
#include <vector>

// Function to find the maximum element in an array
int findMax(const std::vector<int>& arr) {
    return *std::max_element(arr.begin(), arr.end());
}

// Function to reverse an array in place
void reverseArray(std::vector<int>& arr) {
    std::reverse(arr.begin(), arr.end());
}
