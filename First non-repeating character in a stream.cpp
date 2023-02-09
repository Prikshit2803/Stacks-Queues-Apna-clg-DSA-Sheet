class Solution {
	public:
		string FirstNonRepeating(string A){
		    string s;
		    s.push_back(A[0]);
		    queue<int> st;
		    st.push(A[0]);
		    int i=1;
		    int c[100000]={0};
		   /* for(int j=0;j<A.length();j++){
		        if(A[j]>='a' && A[j]<='z' )
		        c[A[i]]++;
		    }*/
		    
		    c[A[0]]++;
		  //  cout<<c[A[0]];
		    //s.push_back(c[A[0]]);
		    //return s;
		    
		    while(i<A.length() ){
		      
		      c[A[i]]++;
		      st.push(A[i]);
		      if(c[st.front()]==1){
		          s.push_back(st.front());
		      }
		      else{
		       while(!st.empty() && c[st.front()]>1 ){
		           
		           //s.push_back(st.front());
		             st.pop();
		             
		             
		             
		       }
		           if(st.empty())
		        s.push_back('#');
		       
		       else
		            s.push_back(st.front());
		       
		        }
		        
		       
		           
		        
		       
		        
		        
		        i++;
		        }
		        
		       
		   
		    
		    return s;
		    
		}

};
