// Last updated: 9/10/2026, 11:26:29 AM
1class MyQueue {
2public:
3    stack<int>s1;
4    stack<int>s2;
5    MyQueue() {
6        
7    }
8    
9    void push(int x) {
10        while(!s1.empty()){
11            s2.push(s1.top());
12            s1.pop();
13        }
14        s1.push(x);
15        while(!s2.empty()){
16            s1.push(s2.top());
17            s2.pop();
18        }
19    }
20    
21    int pop() {
22        int c= s1.top();
23        s1.pop();
24        return c;
25    }
26    
27    int peek() {
28       return s1.top();
29    }
30    
31    bool empty() {
32        return s1.empty();
33    }
34};
35
36/**
37 * Your MyQueue object will be instantiated and called as such:
38 * MyQueue* obj = new MyQueue();
39 * obj->push(x);
40 * int param_2 = obj->pop();
41 * int param_3 = obj->peek();
42 * bool param_4 = obj->empty();
43 */