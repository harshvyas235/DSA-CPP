#include<iostream>
#include<vector>
using namespace std;
int bruteforsemethod(vector<int> &v){
    int i=0;
while (i<v.size())
{
   int l=i-1;
   int r= i+1;
   int lsum=0,rsum=0;
   while (l>=0)
   {
     lsum += v[l];
      l--;
   }
   while (r<v.size())
   {
    rsum+=v[r];
    r++;
   }
   if(lsum==rsum){
    return i;
   }
   else{
    i++;
   }
   

}
return -1;

}

int prefixSumApproach(vector<int> v){
    vector<int> lsum(v.size(),0);
    vector<int> rsum(v.size(),0);
    
    for (int i = 1; i < v.size(); i++)
    {
        lsum[i]= lsum[i-1]+v[i-1];
    }
    for (int i = rsum.size()-2; i >= 0; i--)
    {
        rsum[i]= rsum[i+1]+v[i+1];
        
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        
        if (lsum[i]==rsum[i])
        {
            return i;
        }
        
    }
    
    return -1;
    
}


int main(){

vector<int> v;
for (int i = 0; i < 6; i++)
{
    int n;
    cin>>n;
    v.push_back(n);
}

cout<<prefixSumApproach(v);
return 0;
}