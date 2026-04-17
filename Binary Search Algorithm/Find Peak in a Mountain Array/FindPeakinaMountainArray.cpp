#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    vector<int> ans = {-1, -1};

    // First occurrence
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) {
            ans[0] = m;
            r = m - 1;
        } else if (arr[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    // Last occurrence
    l = 0; 
    r = arr.size() - 1;

    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) {
            ans[1] = m;
            l = m + 1;
        } else if (arr[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return ans;
}