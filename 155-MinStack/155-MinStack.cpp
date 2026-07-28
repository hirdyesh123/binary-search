// Last updated: 7/28/2026, 9:57:58 PM
class MinStack {
public:
  stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()==0)   st.push({val,val});
        else {
            int mina=min(val,st.top().second);
            st.push({val,mina});
        }

    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
    return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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