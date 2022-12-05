class MyStack {
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {

        q.push(x);

        int size=q.size()-1;
        while(--size>=0){
            q.push(q.front());
            q.pop();
            
        }
        
    }
    
    int pop() {
        int res=q.front();
        if(q.size()>0){
            q.pop();
        return res;
        }
        else
        return -1;

    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.size()<=0)
        return true;
        
        else return false;
        //return q.empty();
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

//Another slightly different way
class MyStack {
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int size = q.size();
        q.push(x);
        
        while(--size >= 0) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int ret = q.front();
        q.pop();
        return ret;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

