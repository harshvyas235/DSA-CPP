#include<iostream>
using namespace std;
void diagnol(int arr[][3],int row,int col){
    for (int i = row-1; i >=0; i--)
    {
        int j=(row-i)-1;
        cout<<arr[i][j]<<endl;
    }
    
}
int main(){

int arr[3][3];
int row= 3;
int col=3;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}

diagnol(arr,row,col);

return 0;
}