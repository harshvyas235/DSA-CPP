class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int picktimeP=0;
        int picktimeG=0;
        int picktimeM=0;

        int travelP=0;
        int travelG=0;
        int travelM=0;

        int lastindexP=0;
        int lastindexG=0;
        int lastindexM=0;

        for(int i =0;i<garbage.size();i++){

            string str = garbage[i];
            for(int j=0;j<str.length();j++){
                if(str[j]=='G'){
                    picktimeG++;
                    lastindexG=i;
                   
                }
                else if(str[j]=='P'){
                    picktimeP++;
                    lastindexP=i;
                
                }
                else{
                     picktimeM++;
                    lastindexM=i;
                    
                }
            }
        }
        
        for(int i=0 ; i<lastindexP;i++){
            travelP += travel[i];
        }

        for(int j=0 ; j<lastindexG;j++){
            travelG += travel[j];
        }

         for(int k=0 ; k<lastindexM;k++){
            travelM += travel[k];
        }

           int ans = (travelP + picktimeP) +  (travelM + picktimeM) +(travelG + picktimeG);
       return ans;

    }
};