#include <string>
#include <vector>
#include <unordered_map>

bool isValid(const std::string &s) {
    std::vector<char> stack;
    std::unordered_map<char, char> map = {
        {'{', '}'},
        {'[', ']'},
        {'(', ')'}
    };

    for (char c : s) {
        if (map.count(c)) {
            stack.push_back(c);
        } else {
            if (stack.empty()) return false;
            char top = stack.back();
            stack.pop_back();
            if (c != map[top]) return false;
        }
    }
    return stack.empty();
}