#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
    unordered_map<int, int> ngeMap;
    stack<int> s;

    int n = arr.size();

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        if (s.empty()) {
            ngeMap[arr[i]] = -1;
        } else {
            ngeMap[arr[i]] = s.top();
        }

        s.push(arr[i]);
    }

    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++) {
        ans.push_back(ngeMap[nums1[i]]);
    }

    return ans;
}