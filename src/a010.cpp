#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        bool firstTime=1;
        for(int factor=2;factor<=a;factor++){
            if(a%factor==0){
                if(!firstTime)
                    cout<<" * ";
                int times=0;
                while(a%factor==0){
                    times++;
                    a/=factor;
                }
                if(times==1)
                    cout<<factor;
                else
                    cout<<factor<<"^"<<times;
                firstTime=0;
            }
        }
        cout<<endl;
    }
}