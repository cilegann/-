#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,gcd,i;
    while(cin>>a>>b){
        if(a>b){
            for(i=1;i<=b;i++){
            if((a%i==0)&&(b%i==0))
                gcd=i;
            }    
        }else{
            for(i=1;i<=a;i++){
            if((a%i==0)&&(b%i==0))
              gcd=i;
            }
        }
    cout<<gcd<<endl;
    }
    
}