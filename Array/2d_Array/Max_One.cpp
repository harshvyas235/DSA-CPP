#include<iostream>
using namespace std;
void maxOne(int arr[][4],int row,int col){
    int max=0;
    int ro;
    for (int i = 0; i < row; i++)
    {
        int count =0;
        for (int j = 0; j < col; j++)
        {
            
            if (arr[i][j]==1)
            {
                count++;
            }
            
        }
        if(max<count){
            max=count;

            ro = i+1;

        }
        
    }
    cout<<"max number of the one at : "<<max<<" row : "<<ro;
}
int main(){
int arr[3][4]={
    {0,0,0,0},
    {1,0,1,1},
    {1,0,0,1},
    
};
int row = 3;
int col=4;

maxOne(arr,row,col);



return 0;
}