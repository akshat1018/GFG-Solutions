#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int missingNumber(std::vector<int>& array, int n) {
        
        int expectedSum = (n * (n + 1)) / 2;

        
        int actualSum = 0;
        for (int num : array) {
            actualSum += num;
        }

        
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
