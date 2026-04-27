#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0;
    int j = numbers.size() - 1;

    while(i < j) {
        int sum = numbers[i] + numbers[j];
        
        if(sum > target) {
            --j;
        } else if(sum < target) {
            ++i;
        } else {
            return {i + 1, j + 1}; // 1-based index
        }
    }

    return {};
}