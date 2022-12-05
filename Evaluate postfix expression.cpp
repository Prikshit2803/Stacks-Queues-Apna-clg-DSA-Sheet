//mah kinda code
int evaluatePostfix(string S)
    {
        stack<int> st;
        int len=S.length();
        for(int i=0;i<len;i++){
            if(S[i]>='0' && S[i]<='9'){
                st.push(S[i]-'0');
            }
            else if(S[i]=='*'){
                 int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=b*a;
                st.push(res);
            }
             else if(S[i]=='/'){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=b/a;
                st.push(res);
            }
             else if(S[i]=='+'){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=b+a;
                st.push(res);
            }
             else if(S[i]=='-'){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=b-a;
                st.push(res);
            }
        }
        return st.top();
    }
};

// more optimised// rather a cleaner code
    int evaluatePostfix(const string &S)
    {
        // Your code here
        stack<int> si;
        int len = S.length();
        
        for(int i=0; i<len; ++i) {
            if(S[i] >= '0' && S[i] <= '9')
                si.push(S[i]-'0');
            else {
                int a = si.top();
                si.pop();
                int b = si.top();
                si.pop();
                switch (S[i])
                {
                    case '+': si.push(b + a); break;
                    case '-': si.push(b - a); break;
                    case '*': si.push(b * a); break;
                    case '/': si.push(b / a); break;
                }
            }
        }
        
        return si.top();
    }
