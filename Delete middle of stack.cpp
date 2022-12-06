//maaah soln
/// ceil((size_of_stack+1)/2) (1-based index) : look for meaning of (1- based index) : it means the data structure index starts with 1.
 // for more operations

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       stack<int> st;
       int n=sizeOfStack-1;
       
       if(n%2!=0){
       while(n>((sizeOfStack/2)-1)){//for even
           st.push(s.top());
           s.pop();
           n--;
       }
       }
       else{
           while(n>((sizeOfStack/2))){
           st.push(s.top());
           s.pop();
           n--;
      
       }
       
           
       }
       
       s.pop();
       
       while(!st.empty()){
          s.push(st.top());
           st.pop(); 
       }
    }
};

//a better approach
class Solution

{

    public:

    //Function to delete middle element of a stack.

    void deleteMid(stack<int>&s, int sizeOfStack)

    {

        // code here.. 

        stack<int>st;

        for(int i = 1;i<=sizeOfStack;i++){

            if(i != sizeOfStack/2+1){

                st.push(s.top());

            }

            

            s.pop();

        }

        while(!st.empty()){

            s.push(st.top());

            st.pop();

        }

    }

};
