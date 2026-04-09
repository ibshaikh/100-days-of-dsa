#include <iostream>
#include <stack>
using namespace std;

string removeOuterParentheses(string s) {
    stack stack;
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            stack.push(s[i]);
            if (stack.size() > 1) ans += s[i];
        } else {
            if (stack.size() > 1) ans += s[i];
            stack.pop();
        }
    }
    return ans;
}