#include <vector>
#include <algorithm> // for min()

using namespace std;

class MinStack {
private:
    vector<pair<int, int>> s; // {value, current_min}

public:
    MinStack() {}

    void push(int val) {
        if (s.empty()) {
            s.push_back({val, val});
        } else {
            int currentMin = min(val, s.back().second);
            s.push_back({val, currentMin});
        }
    }

    void pop() {
        if (!s.empty()) {
            s.pop_back();
        }
    }

    int top() {
        if (s.empty()) return -1; // safe check
        return s.back().first;
    }

    int getMin() {
        if (s.empty()) return -1; // safe check
        return s.back().second;
    }
};