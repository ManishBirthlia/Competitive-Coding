class MyStack {
public:
    MyStack() { 
    }
    queue<int>q;
    int topp;
    void push(int x) {
        q.push(x);
        topp=x;
    }
    
    int pop() {
        int n=q.size();
        int a[n],i=0;
        while(!q.empty()){
            a[i++]=q.front();
            q.pop();
        }
        for(int i=0;i<n-1;i++){
            q.push(a[i]);
        }
        int x=a[n-1];
        if(n>1) topp=a[n-2];
        return x;
    }
    
    int top(){
        return topp;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */