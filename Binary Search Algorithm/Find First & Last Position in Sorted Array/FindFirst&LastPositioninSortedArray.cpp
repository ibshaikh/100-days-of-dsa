#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& arr, int target) {
    int n = arr.size();
    vector<int> ans = {-1, -1};

    if (n == 0) return ans;

    int l = 0, r = n - 1;

    // Find first occurrence
    while (l < r) {
        int m = l + (r - l) / 2;
        if (arr[m] < target) l = m + 1;
        else r = m;
    }

    if (arr[l] != target) return ans; // target not found
    ans[0] = l;

    // Find last occurrence
    r = n - 1;  // reset r
    while (l < r) {
        int m = l + (r - l + 1) / 2;
        if (arr[m] > target) r = m - 1;
        else l = m;
    }

    ans[1] = l;

    return ans;
}