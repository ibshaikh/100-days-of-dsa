#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        vector<int> maxL(n);
        maxL[0] = arr[0];

        for (int i = 1; i < n; i++) {
            maxL[i] = max(maxL[i - 1], arr[i]);
        }

        vector<int> maxR(n);
        maxR[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            maxR[i] = max(arr[i], maxR[i + 1]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int waterTrapped = min(maxL[i], maxR[i]) - arr[i];
            ans += max(waterTrapped, 0);
        }

        return ans;
    }
};