class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        
    }
    void reverseStack(stack<int> &s1, stack<int> &s2){
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void push(int x) {
        reverseStack(s1, s2);
        s2.push(x);
        reverseStack(s2, s1);
    }
    
    int pop() {
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {
        return s2.top();
    }
    
    bool empty() {
        return s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */