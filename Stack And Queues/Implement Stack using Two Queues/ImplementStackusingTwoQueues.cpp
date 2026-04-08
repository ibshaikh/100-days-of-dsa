#include <queue>
using namespace std;

class MyStack {
    queue q1, q2;

public:
    MyStack() {}

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front(); q1.pop();
        swap(q1, q2);
        return ans;
    }

    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int front = q1.front(); q1.pop();
        q2.push(front);
        swap(q1, q2);
        return front;
    }

    bool empty() {
        return q1.empty();
    }
};