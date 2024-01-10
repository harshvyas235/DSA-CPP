// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;
// void printSubSeq(string str , string output,int index,vector<string>& total){
//     if (index>=str.length())
//     {
//         total.push_back(output);
//         return;
//     }
//  output.push_back(str[index]);
//     printSubSeq(str,output,index+1,total);
     
//     output.pop_back();
//     printSubSeq(str,output,index+1,total);


    
// }
// int main(){
// string str ="abc";
// vector<string>total;
// printSubSeq(str," ",0,total);
// int i =1;
// for (string ch : total)
// {
//     cout<<i<<" -> "<<ch<<endl;
//     i++;
// }



// return 0;
// }

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void printsubArray(int arr[],int s,int e,int size){
    if(e>=size){
        s=s+1;
        e=s;
         printsubArray(arr,s,e,size);
    }
    if(s>=size){
        return;
    }

    for (int i = s; i <= e; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

    printsubArray(arr,s,e+1,size);
    

}
int main(){
int arr[]={1,2,3};
printsubArray(arr,0,0,3);
return 0;
}