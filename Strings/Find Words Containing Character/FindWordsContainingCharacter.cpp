#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> result;
        for (int i = 0; i < words.size(); i++) {
            for (char c : words[i]) {
                if (c == x) {
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};
    