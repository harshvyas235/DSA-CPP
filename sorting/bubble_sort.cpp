#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&v){
    int size =v.size();
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
              if (v[j]>v[j+1])
              {
                 swap(v[j],v[j+1]);
              }
              
        }
        
    }
    
}
int main(){
vector<int> v;

for (int i = 0; i < 5; i++)
{
    int n ;
    cin>>n;
    v.push_back(n);
}
bubbleSort(v);
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i];
}



return 0;
}