#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,c=0,index=0;
    bool zeroChk=0;
    cin>>a;
    while(a>0){
        c*=10;
        if(a%10)
            zeroChk=1;
        if(zeroChk)
            c+=a%10;
        a/=10;
    }
    cout<<c;
    
}