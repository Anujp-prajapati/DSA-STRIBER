#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <climits> // For INT_MAX
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size(), n = nums2.size();
        function<int(int, int, int)> f = [&](int i, int j, int k)
        {
            if (i >= m)
            {
                return nums2[j + k - 1];
            }
            if (j >= n)
            {
                return nums1[i + k - 1];
            }
            if (k == 1)
            {
                return min(nums1[i], nums2[j]);
            }
            int p = k / 2;
            int x = i + p - 1 < m ? nums1[i + p - 1] : INT_MAX;
            int y = j + p - 1 < n ? nums2[j + p - 1] : INT_MAX;
            return x < y ? f(i + p, j, k - p) : f(i, j + p, k - p);
        };
        int a = f(0, 0, (m + n + 1) / 2);
        int b = f(0, 0, (m + n + 2) / 2);
        return (a + b) / 2.0;
    }
};

int main()
{
    Solution sol;

    // Test 1
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    // Test 2
    nums1 = {1, 2};
    nums2 = {3, 4};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    // Test 3
    nums1 = {0, 0};
    nums2 = {0, 0};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    // Test 4
    nums1 = {};
    nums2 = {1};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    // Test 5
    nums1 = {2};
    nums2 = {};
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}
