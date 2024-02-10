//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    int freq[26]={0};
		    queue<char>q;
		    string s;
		    
		    for(int i =0; i<A.size();i++){
		        
		        char c = A[i];
		        freq[c-'a']++;
		        q.push(c);
		        
		        while(!q.empty()){
		            char ch = q.front();
		            if(freq[ch-'a']>1){
		                q.pop();
		                
		            }
		            else{
		                s= s+ch;
		                
		                break;
		            }
		        }
		        
		        if(q.empty()){
		            s=s+"#";
		        }
		    }
		    return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
