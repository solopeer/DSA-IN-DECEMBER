class MinStack {
public:
    vector<int> v;
    MinStack() {
        vector<int> v;
    }
    
    void push(int x) {
        v.push_back(x);
    }
    
    void pop() {
        v.erase(v.begin()+v.size()-1);
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return *min_element(v.begin(), v.end());
    }
};

class MinStack {
public:
    stack<int> stk;
    int m = INT_MAX;
    MinStack() {
    }
    
    void push(int x) {
        if(x <= m){ 
            stk.push(m);
            m = x;
        }
        stk.push(x);
    }
    
    void pop() {
        int tmp = stk.top();
        stk.pop();
        if(tmp == m){
            m = stk.top();
            stk.pop();
        }
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return m;
    }
};
