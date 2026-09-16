class MinStack {
public:
    stack<long long> v;
    long long mini = INT_MAX;

    MinStack() {
    }
    
    void push(int val) {
        if (v.empty()) {
            mini = val;
            v.push(val);
        }
        else {
            if (val >= mini) {
                v.push(val);
            }
            else {
                v.push(2LL * val - mini);
                mini = val;
            }
        }
    }
    
    void pop() {
        if (v.empty()) {
            return;
        }

        long long n = v.top();
        v.pop();

        if (n < mini) {
            mini = 2LL * mini - n;
        }
    }
    
    int top() {
        if (v.empty()) {
            return 0;
        }

        long long n = v.top();

        if (n < mini) {
            return (int)mini;
        }

        return (int)n;
    }
    
    int getMin() {
        return (int)mini;
    }
};