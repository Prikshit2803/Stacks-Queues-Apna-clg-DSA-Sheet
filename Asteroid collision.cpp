//my code : but it sorta dont work : find why - reason is that is -ve on left and then right no collision eg, -5 5 no collision
vector<int> asteroidCollision(int N, vector<int> &arr) {
        vector<int> ans;
        
        stack<int> st;
        
       
        
        st.push(arr[0]);
        
        for(int i=1;i<N;i++){
            if(!st.empty() && ((st.top()<0 && arr[i]>0) || (st.top()>0 && arr[i]<0))){
                
                while(!st.empty() && abs(arr[i])>abs(st.top())){
                    st.pop();
                }
                
                if(!st.empty() && abs(arr[i])==abs(st.top())){
                    st.pop();
                    continue;
                }
                
               
               else if(!st.empty() && abs(arr[i])<abs(st.top())) {
                   continue;
               }
               
               st.push(arr[i]);
            }
            
            else
            st.push(arr[i]);
        }
        
        if(st.empty())
        return ans;
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
}

//my working code: similar approach
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &arr) {
        vector<int> ans;
        
        stack<int> st;
        
        
        
        st.push(arr[0]);
        
        for(int i=1;i<N;i++){
          //  cout<<arr[i]<<".";
            if(!st.empty() && (st.top()>0 && arr[i]<0)){
                
                while(!st.empty() && st.top()>0 && abs(arr[i])>abs(st.top())){
                    st.pop();
                }
                
                if(!st.empty() &&  st.top()>0 && abs(arr[i])==abs(st.top())){
                    st.pop();
                    continue;
                }
                
               
               else if(!st.empty() && st.top()>0 && abs(arr[i])<abs(st.top())) {
                   continue;
               }
               
               st.push(arr[i]);
            }
            
            else
            st.push(arr[i]);
        }
        
        if(st.empty())
        return ans;
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

//similar approach

// Collision will only happen if stack top is moving right side and asteroid[i] is moving left side
// If stack top is moving left side(-ve) and asteroid[i] is moving right side,collision will never happen.
// If stack is empty, push asteroid[i]
// If stack top is moving right side and asteroid[i] is moving left side,pop the elements till the asteroid[i] is destroying stack top.
// Stop poping when they are equal

vector<int> asteroidCollision(int N, vector<int>& asteroids) {
        vector<int> ans;
        stack<int> s;
    
        for (int i = 0; i < N; i++)
        {
            if (asteroids[i] > 0)
            {
                s.push(asteroids[i]);
            }
            
            else
            {
                while (!s.empty() && s.top() > 0 && s.top() < -asteroids[i])
                {
                    s.pop();
                }
                if (s.empty() || s.top() < 0)
                {
                    s.push(asteroids[i]);
                }
                else if (s.top() == -asteroids[i])
                {
                    s.pop();
                }
            }
        }
    
        while (!s.empty()) {
            int element = s.top();
            s.pop();
            ans.push_back(element);
        }
    
        reverse(ans.begin(), ans.end());
        return ans;
    }
