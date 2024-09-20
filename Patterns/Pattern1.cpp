// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//     for (int i = 0; i < n-(row+1); i++)
//     {
//        cout<<" ";
//     }
//     for (int i = 0; i < row+1; i++)
//     {
//        cout<<"* ";
//     }
//     cout<<endl;
    
    
// }

// //     *
// //    * *
// //   * * *
// //  * * * *
// // * * * * *

// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//     for (int i = 0; i < row; i++)
//     {
//        cout<<" ";
//     }
//     for (int i = 0; i < n-row; i++)
//     {
//        cout<<"* ";
//     }
//     cout<<endl;

// //  * * * *
// //   * * *
// //    * *
// //     *
    
// }

// //     *
// //    * *
// //   * * *
// //  * * * *
// // * * * * *

// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//     for (int i = 0; i < n-row-1; i++)
//     {
//        cout<<" ";
//     }
//     for (int i = 0; i < row+1; i++)
//     {
//         if(i==0||i==row+1-1){
//           cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
       
//     }

//     cout<<endl;
    
    
// }

// //     *
// //    * *
// //   *   *
// //  *     *
// // *       *

// return 0;
// }


/*
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int row = 0; row < n; row++)
{
    for (int i = 0; i < row; i++)
    {
       cout<<" ";
    }
   
    for (int i = 0; i < n-row; i++)
    {
        if(i==0||i==n-row-1){
          cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;


//    *           *
//     *         *
//      *       *
//       *     *
//        *   * 
//         * *
//          *
    
}



return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(){

int n,num;
cin>>num;
n=num/2;

for ( int row = 0; row < n; row++)
{
    for (int i = 0; i < n-row; i++)
    {
      cout<<"*";
    }
    
    for (int i = 0; i < row+1; i++)
    {
       cout<<"  ";
    }
   
    for (int i = 0; i < n-row; i++)
    {
        cout<<"*";
    }
     cout<<endl;
    
    
}

for (int row= 0; row < n; row++)
{
    for (int i = 0; i < row+1; i++)
    {
        cout<<"*";
    }
    
    for (int i = 0; i < n-row; i++)
    {
        cout<<"  ";
    }
    for (int i = 0; i < row+1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}

// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****

return 0;
}
*/
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
for (int i = 1; i <= 5; i++)
{
    
    for (int j = 1; j <= i; j++)
    {
        if(i!=5){
            if(j==1){
            cout<<j<<" ";
        }
        else{
            cout<<"_ ";
        }
        }
        else{
            cout<<j<<" ";
        }
        

        
    }
    if(i!=1&&i!=5){
        cout<<i<<" ";
    }
    
    cout<<endl;
    
}

return 0;
}