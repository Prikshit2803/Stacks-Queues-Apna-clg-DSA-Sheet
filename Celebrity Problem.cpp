//-> M[i][j]  , means i knows j 

//->let's consider each person as vertex of graph.

//->Now,if there is a celebrity then it should be known to everybody , but it should not know anybody.

//->In,otherwords we can say the difference of indegree and outdegree of celebrity must be exactly (n-1).

class Solution 
{
    public:
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
       int deg[n]={0};
       
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(M[i][j]==1){
                   deg[i]-=1;
                   deg[j]+=1;
               }
           }
       }
       
       for(int i=0;i<n;i++){
           if(deg[i]==n-1)
           return i;
           
           
       }
       return -1;
    }
};
