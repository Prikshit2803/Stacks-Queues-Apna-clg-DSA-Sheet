O(N^2) Solution

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

// solution using queue

class Solution 
{
    public:
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
       
       int cnt;
       queue<int> q;
              for(int i=0;i<n;i++){
                  cnt=0;
           for(int j=0;j<n;j++){
               if(M[i][j]==0)
               cnt++;
           }
           if(cnt==n)
           q.push(i);
              }
              
              while(!q.empty()){
                  cnt=0;
                  int ind= q.front();
                   for(int i=0;i<n;i++){
                       if(M[i][ind]==1)
               cnt++;
                       
                   }
                   
                   if(cnt==n-1)
                   return ind;
                   
                   q.pop();
              }
              
              return -1;
               
       
    }
};


O(N) Solution using Stack from scaler
// C++ program to find celebrity
#include <bits/stdc++.h>
#include <list>
using namespace std;

// Max # of persons in the party
#define N 8

bool MATRIX[N][N] = { { 0, 0, 0, 1 },
							{ 0, 0, 0, 1 },
							{ 0, 0, 0, 1 },
							{ 0, 0, 0, 0 } };

bool knows(int a, int b)
{
	return MATRIX[a][b];
}

int findTheCelebrity(int n)
{
	// Our potential celebrity
	int Celeb;
	stack<int> stk;
	

	// Push all the elements into the stack
	for (int i = 0; i < n; i++)
		stk.push(i);

	// Find a potential celebrity
	while (stk.size() > 1)
	{ int x = stk.top();
		stk.pop();
		int y = stk.top();
		stk.pop();
		if (knows(x, y))
		{
		stk.push(y);
		}
		else
		{
		stk.push(x);
		}
	}
	

	// Potential candidate?
	Celeb = stk.top();
	stk.pop();

	// Check if C is actually
	// a celebrity or not
	for (int i = 0; i < n; i++)
	{
		// In case a person does not
		// know 'C' or 'C' doesn't
		// know any person, return -1
		if ( (i != Celeb) &&
				(knows(Celeb, i) ||
				!knows(i, Celeb)) )
			return -1;
	}

	return Celeb;
}

// Driver code
int main()
{
	int n = 4;
	int id = findTheCelebrity(n);
	id == -1 ? cout << "No celebrity is present" :
			cout << "Celebrity ID " << id;
	return 0;
}

