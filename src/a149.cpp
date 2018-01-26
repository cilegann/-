#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,tmp;
    cin>>tmp;
    while(cin>>n){
        if(n){
            int ans=1;
            while(n>0){
                ans*=(n%10);
                 n/=10;
            }
            cout<<ans<<endl;
        }else{
            cout<<0<<endl;
        }
        
    }
}
