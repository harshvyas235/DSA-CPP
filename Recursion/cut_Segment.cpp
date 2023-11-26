// https://practice.geeksforgeeks.org/problems/cutted-segments1642/1
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        if(n==0){
            return 0;
        }
        if(n<0){
            return INT_MIN;
        }
        int option1=1+maximizeTheCuts(n-x,x,y,z);
        int option2=1+maximizeTheCuts(n-y,x,y,z);
        int option3=1+maximizeTheCuts(n-z,x,y,z);
       
       int max1= max(option1,option2);
       return max(max1,option3);
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends