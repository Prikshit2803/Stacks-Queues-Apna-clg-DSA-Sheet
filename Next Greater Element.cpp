// start from back and add to stack and move leftwards and find the bigger element in stack else -1 vector ans then insert the leftwards element in stack 
//till u reach first elemnt 


class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
       vector<long long> ans;
       stack<long> st;
       st.push(arr[n-1]);
       ans.push_back(-1);
       for(int i=n-2;i>=0;i--){
           while(!st.empty() && arr[i]>=st.top()){
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
    }
};
