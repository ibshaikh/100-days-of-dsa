
// Mock guess function - replace with actual implementation or external API
int guess(int num) { return 0; }

int guessNumber(int n) {
    int l = 1, r = n;
    while (l <= r) {
        int m = l + (r - l) / 2;
        int res = guess(m);
        if (res == 0) return m;
        else if (res < 0) r = m - 1;
        else l = m + 1;
    }
    return -1;
}