class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
       
     vector<int> a(n,0),b(n,0);
     
     
     a[0]=arr[0];
     for(int i=1;i<n;i++){
         a[i]=max(a[i-1],arr[i]);
     }
     
    //  for(int i=0;i<n;i++){
    //      cout<<a[i]<<".";
    //  }
      
      b[n-1]=arr[n-1];
     
      for(int i=n-2;i>=0;i--){
         b[i]=max(b[i+1],arr[i]);
     }
       
     long long ans=0;
     
     for(int i=1;i<n-1;i++){
         ans+=min(a[i],b[i])-arr[i];
     }
     
     return ans;
    }
};
