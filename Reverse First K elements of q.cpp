//Use stack to reverse and the add remaining to another queue and then put it all into q
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> st;
    while(--k>=0){
        st.push(q.front());
        q.pop();
    }
    queue<int> dq;
    while(!q.empty()){
       dq.push(q.front());
       q.pop();
        
    }
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    while(!dq.empty()){
       q.push(dq.front());
       dq.pop();
        
    }
    
    return q;
}

//Mah own simpler approach

queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> st;
    while(--k>=0){
        st.push(q.front());
        q.pop();
    }
    queue<int> dq;
    /*while(!q.empty()){
       dq.push(q.front());
       q.pop();
        
    }*/
    
    while(!st.empty()){
        dq.push(st.top());
        st.pop();
    }
    
    while(!q.empty()){
       dq.push(q.front());
       q.pop();
        
    }
    
    return dq;
}

