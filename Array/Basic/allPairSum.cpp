/* sum of all tow pair



#include<iostream>
#include<limits.h>

using namespace std;

void printSum(int arr[],int n){
    int max = INT_MIN;
    int pair[2];
    for (int i = 0; i < n; i++)
    {
           for (int j = i+1; j <n; j++)
           {
           int sum = arr[i]+arr[j];
           if(sum>max){
            pair[0]=arr[i];
            pair[1]=arr[j];
            max = sum;
           }
           cout<<" the sum of "<<arr[i]<<" "<<arr[j]<<" : "<<sum<<endl;
           }

    }

    cout<<endl<<endl<<" the pair having greatest sum is : ("<<pair[0]<<","<<pair[1]<<") : "<<max;

}
int main(){

int arr[3];
for (int i = 0; i < 3; i++)
{
    cin>>arr[i];
}
int length =sizeof(arr)/sizeof(arr[0]);

printSum(arr,length);


return 0;
// 1 2 3
//  the sum of 1 1 : 2
//  the sum of 1 2 : 3
//  the sum of 1 3 : 4
//  the sum of 2 1 : 3
//  the sum of 2 2 : 4
//  the sum of 2 3 : 5
//  the sum of 3 1 : 4
//  the sum of 3 2 : 5
//  the sum of 3 3 : 6


//  the pair having greatest sum is : (3,3) : 6




}
*/

/*sum of all three pair*/
#include <iostream>
#include <limits.h>
using namespace std;
void printSum(int arr[], int n)
{
    int max = INT_MIN;
    int pair[3];
     for (int  i = 0; i < n; i++)
     {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                cout<<"("<<arr[i]<<arr[j]<<arr[k]<<")"<<endl;
            }
            
        }
        
     }
     
}
int main()
{

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int length = sizeof(arr) / sizeof(arr[0]);

    printSum(arr, length);

    return 0;
}