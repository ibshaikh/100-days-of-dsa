#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isWindowValid(vector<int>& freq, int k) {
    int totalCount = 0, maxCount = 0;
    
    for (int i = 0; i < 26; i++) {
        totalCount += freq[i];
        maxCount = max(maxCount, freq[i]);
    }
    
    return (totalCount - maxCount <= k);
}

int characterReplacement(string s, int k) {
    int i = 0, j = 0, maxWindow = 0;
    vector<int> freq(26, 0);

    while (j < s.length()) {
        freq[s[j] - 'A']++;

        while (!isWindowValid(freq, k)) {
            freq[s[i] - 'A']--;
            i++;
        }

        maxWindow = max(maxWindow, j - i + 1);
        j++;
    }

    return maxWindow;
}