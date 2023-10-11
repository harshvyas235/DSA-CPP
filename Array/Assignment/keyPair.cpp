#include <bits/stdc++.h>
#include<vector>
using namespace std;
bool towpairSum(vector<int> v,int key ){
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i]+v[j]==key)
            return true;
        }
        
    }
    return false;
    

}


bool usingTowpointer(vector<int> v, int key){
    int low =0;
    int high= v.size()-1;
  
    while (low<high)
    {
        if(v[low]+v[high]==key){
                   return true;
        }
        else if (v[low]+v[high]>key)
        {
               high--;
        }
        else{
            low++;
        }
        
    }
    return false;

}
int main(){
    int key;
    cin>>key;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    
//    cout<< towpairSum(v,key);
  sort(v.begin(),v.end());
  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  

    
   cout<<usingTowpointer(v,key);


return 0;
}