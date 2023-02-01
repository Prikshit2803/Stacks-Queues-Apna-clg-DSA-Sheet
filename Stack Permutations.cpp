class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        int i;
        int j=0;
        stack<int> s;
        
        for(i=0;i<N;i++){
            s.push(A[i]);
            
            while(!s.empty() && s.top()==B[j]){
                s.pop();
                j++;
                
            }
            }
            if(s.empty())
            return 1;
            else
            return 0;
    }
};
