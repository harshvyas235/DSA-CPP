#include<iostream>
#include<string.h>
using namespace std;
string timeConversion(string s) {
    string sub = s.substr(8,10);
    string time= "PM";
    string convert =s.substr(0,2);
    int num = stoi(convert);
    if (num==12&&sub!=time) {
        
        
        time= "00";
        s.erase(0,2);
        
        s.insert(0,time);
        s.erase(8,2);
    
        time =s;
        
    
    }
    else if(convert.at(0)="0"&&sub!=time){
          s.erase(8,2);
    
        time =s;
        
    }
    else if(num==12 && sub==time){
         time= to_string(num);
        s.erase(0,2);
        
        s.insert(0,time);
         s.erase(8,2);
    
        time =s;
        

    }
    else{
        
        
        
        num = 12+num;
        
        time= to_string(num);
        s.erase(0,2);
        
        s.insert(0,time);
         s.erase(8,2);
    
        time =s;
        
        
    }
return time;
    

}
int main(){
    string s;
    getline(cin, s);

    cout<< timeConversion(s);
   



return 0;
}