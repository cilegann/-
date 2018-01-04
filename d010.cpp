#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        int total=0;
        for(int i=1;i<a;i++){
            if(!(a%i))
                total+=i;
        }
        if(total>a)
            cout<<"盈數"<<endl;
        else if(total==a)
            cout<<"完全數"<<endl;
        else
            cout<<"虧數"<<endl;
    }   
}