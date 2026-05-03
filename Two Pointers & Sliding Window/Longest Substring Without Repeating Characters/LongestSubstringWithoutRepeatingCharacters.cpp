#include <iostream>
#include <unordered_map>
#include <algorithm>   // for max
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> map;  // FIX: specify types
    int maxWS = 0, i = 0;

    for (int j = 0; j < s.length(); j++) {
        if (map.find(s[j]) != map.end() && map[s[j]] >= i) {
            i = map[s[j]] + 1;
        }

        map[s[j]] = j;

        int currWS = j - i + 1;
        maxWS = max(maxWS, currWS);
    }

    return maxWS;
}