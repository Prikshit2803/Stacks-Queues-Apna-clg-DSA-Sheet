//Use stack to reverse

queue<int> rev(queue<int> q)
{
    
    stack<int> st;
    int size=q.size();
    while(--size>=0){
        
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    return q;
}
// using a vector
vector<int>v;

  while(!q.empty())

  {

      v.push_back(q.front());

      q.pop();

  }

  reverse(v.begin(),v.end());

  for(int i=0;i<v.size();i++)

  {

      q.push(v[i]);

  }

  return q;

//using recursion 
void solve(queue<int> &q){
    if(q.empty())
    return;
    int num = q.front();
    q.pop();
    solve(q);
    q.push(num);
}
queue<int> rev(queue<int> q)
{
    // add code here.
    solve(q);
    return q;
}

//iterative way
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;
    while(!(q.empty())){
        s.push(q.front());
        q.pop();
    }
    while(!(s.empty())){
        q.push(s.top());
        s.pop();
    }
    return q;
}
