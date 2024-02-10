//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    int leng = s.length();
    if(leng%2!=0){
        return -1;
    }
    stack<char>st;
    int count=0;
    int i =0;
    while(i<leng){
        if(st.empty()){
            st.push(s[i]);
            // cout<<"zer0  wale"<<endl;
        }
        
        // else if(st.top()=='}'&&s[i]=='{'){
        //     count=count+1;
        //     // cout<<"first wale"<<endl;
            
        //     st.pop();
        // }
        else if(st.top()=='{'&&s[i]=='}'){
            // cout<<"second wale"<<endl;
            st.pop();
        }
        
        else{
            // cout<<"third wale"<<endl;
            st.push(s[i]);
        }
        i++;
    }
    // cout<<count;
    int size = st.size();
    
     if(size%2==0){
         while(!st.empty()){
        char m = st.top();
        st.pop();
        if(m==st.top()){
            count=count+1;
        }
        else{
            count=count+2;
        }
        st.pop();
    }
        
        return count;
    }
    
    
    
    
   
   
    return -1;
    
   
}