#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        if(a==0){
            break;
        }else{
            int ans=0;
            for(int i=1;i<=a;i++){
                ans+=(i*i);
            }
            cout<<ans<<endl;
        }
    }

}