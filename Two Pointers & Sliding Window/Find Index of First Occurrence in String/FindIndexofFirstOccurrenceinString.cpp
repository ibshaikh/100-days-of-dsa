#include <string>
int strStr(const std::string &haystack, const std::string &needle) {
    int n = haystack.length();
    int m = needle.length();

    // Edge case: empty needle
    if (m == 0) return 0;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        for (j = 0; j < m; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}