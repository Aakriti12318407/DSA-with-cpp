#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maxCount = 0;

    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }

    return maxCount;
}

int main() {
    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    vector<int> nums2 = {1, 0, 1, 1, 0, 1};

    cout << findMaxConsecutiveOnes(nums1) << endl; // Output: 3
    cout << findMaxConsecutiveOnes(nums2) << endl; // Output: 2

    return 0;
}
