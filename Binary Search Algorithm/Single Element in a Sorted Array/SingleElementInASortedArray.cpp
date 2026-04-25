#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;

    while (l < r) {
        int m = l + (r - l) / 2;

        if (m > 0 && arr[m] == arr[m - 1]) {
            int leftCount = m - l;
            if (leftCount % 2 == 1)
                r = m - 2;
            else
                l = m + 1;

        } else if (m < arr.size() - 1 && arr[m] == arr[m + 1]) {
            int leftCount = m - l;
            if (leftCount % 2 == 1)
                r = m - 1;
            else
                l = m + 2;

        } else {
            return arr[m];
        }
    }
    return arr[l];
}

int main() {
    vector<int> arr = {1,1,2,2,3,4,4,5,5};
    cout << singleNonDuplicate(arr);
    return 0;
}