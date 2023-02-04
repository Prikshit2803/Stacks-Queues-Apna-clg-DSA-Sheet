//using recursion
void solve(stack<int>&s,int val){

    if(s.empty()||(!s.empty() and s.top()<val)){

        s.push(val);

        return;

    }

      int x=s.top();

 

  s.pop();

 

  

 

  solve(s,val);

 

  s.push(x);

}

void SortedStack :: sort()

{

   //Your code here

       if(s.empty())

 

    return;

 

    

 

    int num=s.top();

 

    s.pop();

 

    

 

    sort();

 

    

 

    solve(s,num);

}

/// need to develop a solution using a temp stack
