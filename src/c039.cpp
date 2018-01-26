#include<iostream>
#include<algorithm>
//#include<math.h>
using namespace std;
int cycleLength(int a){
    int length=1;
    while(1){
        if(a==1)
            return length;
        else if(a%2==1)
            a=3*a+1;
        else
            a/=2;
        length++;
    }
}
int main(){
    int a,b;
    while(cin>>a>>b){
        int maxx=0;
        for(int i=min(a,b);i<=max(a,b);i++){
            maxx=max(maxx,cycleLength(i));
            //cout<<maxx<<" ";
            //cout<<cycleLength(i);
        }
        cout<<a<<" "<<b<<" "<<maxx<<endl;
    }
}
