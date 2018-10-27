#include<iostream>
using namespace std;
int gcd(int a,int b){
    int tmp;
    while(a%b){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return b;
}

int main(){
    int times;
    while(cin>>times){
        if(!times)
            break;
        int ans=1,tmp;
        for(int i=0;i<times;i++){
            cin>>tmp;
            ans=ans/gcd(tmp,ans)*tmp;
        }
        cout<<ans<<endl;
    }
}