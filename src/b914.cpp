#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a){
        int total=0;
        for(int i=0;i<a;i++){
            cin>>b;
            total+=b;
        }
        if(a==0)
            cout<<0<<endl;
        else if(((total*10/a)%10)>=5)
            cout<<(int)total/a+1<<endl;
        else
            cout<<total/a<<endl;
    }
}