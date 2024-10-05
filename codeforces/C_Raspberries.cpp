#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of even numbers in the array
int countEvenNumbers(const vector<int>& arr) {
    int evenCount = 0;
    for (int num : arr) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}

// Function to find the minimum operations to make a number divisible by k or have at least 2 even numbers
int minOperationsToEvenOrDivisible(vector<int>& arr, int k) {
    int evenCount = countEvenNumbers(arr);
    
    // If k == 1, all numbers are already divisible by 1, so no operations needed
    if (k == 1) {
        return 0;
    }

    // If there are two or more even numbers, return 0 (no operations needed)
    if (evenCount >= 2) {
        return 0;
    }

    // If there's less than 2 even numbers, we need to make one number divisible by k
    // Find the minimum number of operations needed to make a number divisible by k
    int minOperations = INT_MAX;
    for (int num : arr) {
        int remainder = num % k;
        int operations = remainder == 0 ? 0 : (k - remainder);
        minOperations = min(minOperations, operations);
    }

    return minOperations;
}

int main() {
    vector<int> arr = {3, 7, 9}; // Example array
    int k = 2; // Example divisor
    
    int result = minOperationsToEvenOrDivisible(arr, k);
    cout << "Minimum operations required: " << result << endl;
    
    return 0;
}
