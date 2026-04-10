#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
using namespace std;

int evalRPN(vector<string>& arr) {
    stack<int> st;

    unordered_map<string, function<int(int, int)>> mp = {
        {"+", [](int a, int b) { return b + a; }},
        {"*", [](int a, int b) { return b * a; }},
        {"-", [](int a, int b) { return b - a; }},
        {"/", [](int a, int b) { return b / a; }}
    };

    for (int i = 0; i < arr.size(); i++) {
        if (mp.count(arr[i])) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            int ans = mp[arr[i]](a, b);
            st.push(ans);
        } else {
            st.push(stoi(arr[i]));
        }
    }

    return st.top();
}