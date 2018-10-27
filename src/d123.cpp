#include<iostream>
using namespace std;

int main(){
    int length,time=1;
    while(cin>>length){
        int a[100],b[10000];
        for(int i=0;i<length;i++){
            cin>>a[i];
        }
        bool b2=0;
        for(int i=0;i<length;i++){
            for(int j=i;j<length;j++){
                for(int k=i;k<j;k++){
                    for(int m=k;m<j;m++){
                        if((a[i]+a[j])==(a[k]+a[m])){
                            b2=1;
                            
                        }
                        
                    }
                }
            }
        }
        if(b2)
            cout<<"Case #"<<time<<": It is not a B2-Sequence."<<endl<<endl;
        else
            cout<<"Case #"<<time<<": It is a B2-Sequence."<<endl<<endl;
        time++;
    }
    return 0;
}
