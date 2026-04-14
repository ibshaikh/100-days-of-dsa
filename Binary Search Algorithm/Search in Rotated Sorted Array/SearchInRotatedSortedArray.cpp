#include <vector>
using namespace std;

int search(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1;
    
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == target) return m;
        
        // Left half is sorted
        if (arr[l] <= arr[m]) {
            if (target >= arr[l] && target < arr[m])
                r = m - 1;
            else
                l = m + 1;
        } 
        // Right half is sorted
        else {
            if (target > arr[m] && target <= arr[r])
                l = m + 1;
            else
                r = m - 1;
        }
    }
    
    return -1;
}