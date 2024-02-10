#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void printingFneg(int *arr,int size,int k){
    deque<int>dq;
    int i =0;
    while(i<k){
        if(arr[i]<0){
            dq.push_back(i);
        }
        i++;
    }

    for (int i = k; i <size; i++)
    {
        if(dq.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }
        if(i-dq.front()>=k){
            dq.pop_front();
        }
        if(arr[i]<0){
            dq.push_back(i);
        }
    }
     if (dq.empty())
        cout << "0" << endl;
    else
    {
        cout << arr[dq.front()] << " ";
    }
    cout << endl;

}
int main(){
    int arr[]={2,-5,4,-1,-2,0,5};

    printingFneg(arr,7,3);

return 0;
}