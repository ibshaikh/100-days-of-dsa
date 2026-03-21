#include <iostream>
#include <climits>
using namespace std;

int findSmallest(int arr[], int n) {
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[] = {2, -6, 4, 8, 1, -9};
    int result = findSmallest(arr, 6);
    cout << "Result: " << result << endl; // Output: -9
    return 0;
}