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
