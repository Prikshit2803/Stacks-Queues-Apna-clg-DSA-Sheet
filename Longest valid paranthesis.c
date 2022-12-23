class Solution{
public:
    int maxLength(string S){
        int n=S.length();
        int i=0;
        //int j=n-1;
        int count=0;
        /*while(i!=j){
            if(S[i]=='('){
                while(S[j]!=')')
                j--;
                
                count++;
                i++;
                j--;
            }
            
        }
        return count;*/
        
     // Approach 1: wherein we find longest sequence based on stack
        
        
    stack<int> st;
    st.push(-1);
    for(i;i<n;i++){
        if(S[i]=='(')
        st.push(i);
        
        else
        {
            st.pop();
            if(!st.empty()){
             count=max((i-st.top()),count);// to get longest sequence
            // count=i-st.top();
            
        }
        else
        st.push(i);
    }
    }
    
    return count;
      
     // Approach 2: We fing longest sequence using two variables 
      
     int open=0,close=0;

        int ans=0;

        

        for(int i=0;i<s.size();i++){

            if(s[i]=='('){

                open++;

            }

            else{

                close++;

            }

            if(open==close){

                ans=max(ans,open+close);

            }

            if(close>open){

                close=0;

                open=0;

            }

        }

        open=0,close=0;
        for(int i=s.size()-1;i>=0;i--){

            if(s[i]==')'){

                close++;

            }

            else{

                open++;

            }

            if(open==close){

                ans=max(ans,open+close);

            }

            if(open>close){

                open=0,close=0;

            }

        }

        
        
        return ans;
            
        }
        
        
        
    
};
