class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
           int row=grid.size();
	    int col=grid[0].size();
	    int t=-1;// bcoz it runs one time extra as newly rotten oranges pushed into grid
	    //vector<vector<int>> ans(row,vector<int>(col,-1));
	    // vector<vector<int>>vis(row,vector<int>(col,0));
	    queue<pair <int,int>> q;
	    
	    for(int i=0;i<row;i++){
	        for(int j=0;j<col;j++){
	            if(grid[i][j]==2){
	                q.push({i,j});
	                //ans[i][j]=0;
	               // vis[i][j]=1;
	            }
	        }
	    }
	    
	    int di[]={1,-1,0,0};
	    int dj[]={0,0,1,-1};
	    
	    //int size= q.size();
	   // for(int i=0;i<size;i++)
	   while(!q.empty()){
	     
	     int n=q.size();
	     while(n--){
	        int a=q.front().first;
	        int b=q.front().second;
	        
	        q.pop();
	        
	        for(int k=0;k<4;k++){
	            int na=a+di[k];
	            int nb = b+ dj[k];
	            
	            if( !(na<0||nb<0||na>=row||nb>=col)  && grid[na][nb]==1){
	                q.push({na,nb});
	                grid[na][nb]=2;
	                
	                //ans[na][nb]=ans[a][b]+1;
	                
	                
	               
	            }
	            
	        }
	     }
	     t++;
	    }
	   
	  for(int i=0;i<row;i++){
	        for(int j=0;j<col;j++){
	            if(grid[i][j]==1)
	            return -1;
	        }
	  }
	    
	    
	   return t; 
    }
};
