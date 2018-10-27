#include<iostream>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int i=0;i<times;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(c-b==b-a){
            int r=c-b;
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+r;
        }else{
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*d/c;
        }
        if(i!=times-1)
            cout<<endl;
    }
}