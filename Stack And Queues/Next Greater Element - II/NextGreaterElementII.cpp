#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> s;  // store values

    for (int i = 2 * n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i % n]) {
            s.pop();
        }

        if (i < n) {
            if (!s.empty()) {
                ans[i] = s.top();
            }
        }

        s.push(arr[i % n]);
    }

    return ans;
}