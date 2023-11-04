#include<iostream>
#include<string.h>
#include <bits/stdc++.h> 
#include<limits.h>
using namespace std;

  
      int minMin(vector<int>& time){
          sort(time.begin(), time.end()); 
          int i =0 ,j=i+1 ;
          int min = INT_MAX;
          while (j<time.size())
          {
              if(time[i]==time[j]){
                return 0;
              }
              else
              {
                int ans = time[j]-time[i];
                if(ans<min){
                    min = ans;
                    
                }
                i++;
                j++;
              }
              
              
          }
          return min;
        
          
      }
    int findMinDifference(vector<string>& timePoints) {
        int i =0;
        vector<int> final;
        while(i<timePoints.size()){
            string a = timePoints[i];
            string hr = a.substr(0,2);
            string min = a.substr(3,2);
            int hour = stoi(hr);
            int minute = stoi(min);
            
            if(hour==00&& minute==0){
                hour = 24;
            }

            int totalMin= hour*60+minute;

            final.push_back(totalMin);
               
               i++;



        }
        int ans = minMin(final);
        return abs(ans);
    }

int main(){
vector<string> timep={"00:00","23:59","00:00"};
 cout<<findMinDifference(timep);




return 0;
}







