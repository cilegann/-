#include<iostream>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int t=0;t<times;t++){
        int h1,m1,h2,m2,m3;
        cin>>h1>>m1>>h2>>m2>>m3;
        if((h1*60+m1+m3)<=(h2*60+m2)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}