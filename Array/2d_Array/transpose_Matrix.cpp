#include<iostream>
#include<vector>
using namespace std;
void Transpose(int arr[][3], int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j>=i)
            {
                swap(arr[i][j],arr[j][i]);
            }
            
        }
        
    }

   
    
    
}

void transposeVector(vector< vector<int > > arr ){
 for (int i = 0; i < arr.size(); i++)
 {
       for (int j = 0; i < arr[i].size(); i++)
       {
        
        cin >>arr[i][j];
        
        
        
       }
       
 }
for (int i = 0; i < arr.size(); i++)
 {
       for (int j = 0; i < arr[i].size(); i++)
       {
        
        cout<<arr[i][j];
        
        
        
       }
       
 }


 

}
int main(){

int arr[3][3];
vector < vector<int> > arr2(3 ,vector<int>(3));

transposeVector(arr2);


// int row= 3;
// int col=3;
// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//         cin>>arr[i][j];
//     }
    
// }
//  for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//            cout<<arr[i][j]<<" ";
//         }
//          cout<<endl;
        
//     }
// cout<<"after transpose of matrix : "<<endl;
// Transpose(arr,row,col);
//  for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//            cout<<arr[i][j]<<" ";
//         }
//          cout<<endl;
        
//     }
    

return 0;
}

/*
1 2 3 4 5 6 7 8 9
1 2 3
4 5 6
7 8 9
after transpose of matrix :
1 4 7
2 5 8
3 6 9
*/