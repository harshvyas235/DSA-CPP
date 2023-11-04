

//gfg 



class Solution
{
  public:
  
   bool findpossible( int arr[] ,long long  n, int N, int  M)
    {
       long long pagecount=0;
        int c=1;
        
       
        for(int i=0;i<N;i++)
        {
            if(arr[i]>n)
            {
                return false;
            }
            else if(pagecount+arr[i]>n)
            {
                pagecount=arr[i];
                c++;
                if(c>M){
                    return false;
                }
            }
            
            else{
                pagecount= pagecount+arr[i];
            }
        }
        return true;
    }
  
  
    long long minTime(int arr[], int n, int k)
    {
      long long s= 0;
      long long e=0;
       for(int i=0; i<n;i++){
           e += arr[i];
       }
         long long mid = s+(e-s)/2;
        long long ans=-1;
       while(s<=e){
        
          
           
           if(findpossible(arr,mid,n,k)!=false){
               ans= mid;
               e=mid-1;
           }
           else {
               s= mid+1;
           }
           mid=s+(e-s)/2;
       }
       
       return ans;
    }
};

