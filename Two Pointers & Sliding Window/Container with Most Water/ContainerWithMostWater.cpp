#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int i = 0, j = height.size() - 1;
    int maxWater = 0;

    while (i < j) {
        int area = min(height[i], height[j]) * (j - i);
        maxWater = max(maxWater, area);

        if (height[i] > height[j]) {
            j--;
        } else {
            i++;
        }
    }
    return maxWater;
}