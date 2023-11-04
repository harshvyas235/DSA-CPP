#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void printSubSeq(string str , string output,int index,vector<string>& total){
    if (index>=str.length())
    {
        total.push_back(output);
        return;
    }

    printSubSeq(str,output,index+1,total);
     
    output.push_back(str[index]);
    printSubSeq(str,output,index+1,total);


    
}
int main(){
string str ="love";
vector<string>total;
printSubSeq(str," ",0,total);
int i =1;
for (string ch : total)
{
    cout<<i<<" -> "<<ch<<endl;
    i++;
}



return 0;
}