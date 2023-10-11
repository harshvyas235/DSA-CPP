#include<iostream>
using namespace std;

void rowSum(int arr[][4],int row,int col){

    for (int i = 0; i < row; i++)
   
    { int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
        
    }
    
}

int main(){
int arr[3][4];
int row= 3;
int col=4;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}

rowSum(arr,row,col);


return 0;
}
