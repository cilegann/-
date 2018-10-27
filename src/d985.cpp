#include<iostream>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int t=1;t<=times;t++){
        int laps,sum=0,bestM=1000,bestS=1000;
        cin>>laps;
        for(int i=0;i<laps;i++){
            int m,s;
            cin>>m>>s;
            sum+=(m*60+s);
            if((m*60+s)<(bestM*60+bestS)){
                bestM=m;
                bestS=s;
            }
        }
        sum/=laps;
        cout<<"Track "<<t<<":"<<endl;
        cout<<"Best Lap: "<<bestM<<" minute(s) "<<bestS<<" second(s)."<<endl;
        cout<<"Average: "<<sum/60<<" minute(s) "<<sum%60<<" second(s)."<<endl<<endl;
        
        
    }
}