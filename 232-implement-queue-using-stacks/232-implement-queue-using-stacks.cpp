class MyQueue {
public:
    stack<int> s;
        stack<int>temp;
public:
   
    MyQueue() {
         
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while (!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        int y=temp.top();
        temp.pop();
        while(!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        return y;
    }
    
    int peek() {
        if (s.empty())
            return 0;
        while (!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        int y=temp.top();
        while(!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        return y;
    }
    
    bool empty() {
        if (s.empty())
            return true;
        else
            return false;
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