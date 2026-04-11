#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, 0);
    stack<int> s;  // stores indices

    s.push(n - 1);

    for (int i = n - 2; i >= 0; i--) {
        while (!s.empty() && arr[i] >= arr[s.top()]) {
            s.pop();
        }

        if (!s.empty()) {
            ans[i] = s.top() - i;
        }

        s.push(i);
    }

    return ans;
}