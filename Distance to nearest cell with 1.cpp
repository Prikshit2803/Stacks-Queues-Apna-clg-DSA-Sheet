 
	    //dont use bool valid function as it gives TLE ans use vis matrix
//similar problems : rotten oranges and knight walk

class Solution 
{
    public:

bool valid(int na,int nb,int row,int col,vector<vector<int>> ans){
    if(na<0||nb<0||na>=row||nb>=col||ans[na][nb]!=-1)
    return false;
    
    else
    return true;
}
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int row=grid.size();
	    int col=grid[0].size();
	    vector<vector<int>> ans(row,vector<int>(col,-1));
	     vector<vector<int>>vis(row,vector<int>(col,0));
	    queue<pair <int,int>> q;
	    
	    for(int i=0;i<row;i++){
	        for(int j=0;j<col;j++){
	            if(grid[i][j]==1){
	                q.push({i,j});
	                ans[i][j]=0;
	                vis[i][j]=1;
	            }
	        }
	    }
	    
	    int di[]={1,-1,0,0};
	    int dj[]={0,0,1,-1};
	    
	    //int size= q.size();
	   // for(int i=0;i<size;i++)
	   while(!q.empty()){
	     
	        int a=q.front().first;
	        int b=q.front().second;
	        
	        q.pop();
	        
	        for(int k=0;k<4;k++){
	            int na=a+di[k];
	            int nb = b+ dj[k];
	            
	            if( !(na<0||nb<0||na>=row||nb>=col||ans[na][nb]!=-1) && vis[na][nb]!=1 ){
	                q.push({na,nb});
	                vis[na][nb]=1;
	                ans[na][nb]=ans[a][b]+1;
	                
	               
	            }
	            
	        }
	    }
	   
	    //dont use bool valid function as it gives TLE
	    
	   return ans; 
	}
};
