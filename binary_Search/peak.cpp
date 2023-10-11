#include<iostream>
#include<vector>
using namespace std;
int findpeak(vector<int>v){
int s=0;
int e= v.size()-1;
int mid= s+(e-s)/2;
while (s<=e)
{
    if(v[mid]>v[mid+1]&&v[mid]>v[mid-1]){
        return mid;
    }
    else if (v[mid]<v[mid+1])
    {
        s=mid+1;
        // cout<<s<<endl;
    }
    else if (v[mid]<v[mid-1])
    {
        e=mid;
        // cout<<e<<endl;
    }
    
     mid= s+(e-s)/2;
    
}
return -1;

}
int main(){
vector<int> v;
for (int i = 0; i < 4 ; i++)
{
    int n;
    cin>>n;
    v.push_back(n);
}
cout<<"peak element is the : "<<findpeak(v);



return 0;
}