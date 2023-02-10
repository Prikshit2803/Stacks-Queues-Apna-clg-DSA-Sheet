// Similar to next greater elemnt 
  vector<long long> ans;
       stack<long> st;
       st.push(arr[n-1]);
       ans.push_back(-1);
       for(int i=n-2;i>=0;i--){
           while(!st.empty() && arr[i]<=st.top()){
               st.pop();
           }
           
           if(st.empty()){
             ans.push_back(-1);  
           }
           
           else
           ans.push_back(st.top());
           
           st.push(arr[i]);
       }
       
       reverse(ans.begin(),ans.end());
       
       return ans;
