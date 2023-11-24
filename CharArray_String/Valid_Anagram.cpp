#include<bits/stdc++.h> 
#include<string.h>

using namespace std;
void check(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        cout<<t<<endl<<s<<endl;
        cout<<s.compare(t)<<endl;
        if(s.compare(t)){
            cout<<"false";
        }
        else {
            cout<<true;
        }

    }
int main(){
string s;
string t;
cin>>s;
cin>>t;
check(s,t);

return 0;
}