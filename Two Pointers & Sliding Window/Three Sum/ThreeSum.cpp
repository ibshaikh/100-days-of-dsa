#include <vector>
#include <algorithm>
using namespace std;

void twoSum(vector<int>& arr, int x, vector<vector<int>>& ans) {
    int i = x + 1;
    int j = arr.size() - 1;

    while (i < j) {
        int sum = arr[i] + arr[j] + arr[x];

        if (sum > 0) {
            --j;
        } else if (sum < 0) {
            ++i;
        } else {
            ans.push_back({arr[x], arr[i], arr[j]});
            ++i;
            --j;

            // skip duplicates
            while (i < j && arr[i] == arr[i - 1]) ++i;
            while (i < j && arr[j] == arr[j + 1]) --j;
        }
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); ++i) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            twoSum(nums, i, ans);
        }
    }
    return ans;
}