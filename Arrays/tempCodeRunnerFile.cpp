#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int missingNumber(std::vector<int>& array, int n) {
        // Calculate the sum of first N natural numbers
        int expectedSum = (n * (n + 1)) / 2;

        // Calculate the sum of the given array
        int actualSum = 0;
        for (int num : array) {
            actualSum += num;
        }

        // The missing number is the difference between the expected sum and actual sum
        int missingNumber = expectedSum - actualSum;

        return missingNumber;
    }
};

int main() {
    Solution solution;
        vector<int> array = {1, 2, 4, 6, 3, 7, 8};
    int n = 8;

    int result = solution.missingNumber(array, n);

    std::cout << "The missing number is: " << result << std::endl;

    return 0;
}
