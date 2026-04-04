class MinStack {
    vector<int> stack, mn;
public:

    MinStack() {
    }
    
    void push(int val) {
        stack.push_back(val);
        mn.push_back(mn.empty() ? val : min(mn.back(), val));
    }
    
    void pop() {
        if(!stack.empty()) {stack.pop_back(); mn.pop_back();}
    }
    
    int top() {
        if(!stack.empty()) return stack.back();
        else return {};
    }
    
    int getMin() {
        return mn.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */