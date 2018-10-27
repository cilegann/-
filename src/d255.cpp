#include<iostream>
using namespace std;
int gcd(int a,int b){
    int tmp;
    while(a%b){
        //a一直都大於b, 讓b=a%b, a=原本b
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return b;
}
int main(){
    int n;
    while(cin>>n){
        if(!n)
            break;
        int g=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                g+=gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
}
