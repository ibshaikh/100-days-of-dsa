#include <vector>
using namespace std;

int findMin(vector<int>& a) {
    int l = 0, r = a.size() - 1;

    while (l <= r) {
        // If already sorted
        if (a[l] <= a[r]) return a[l];

        int m = l + (r - l) / 2;

        // Check pivot safely
        if (m > 0 && a[m] < a[m - 1]) 
            return a[m];

        // Decide which side to go
        if (a[m] >= a[l]) 
            l = m + 1;
        else 
            r = m - 1;
    }

    return -1; // fallback
}