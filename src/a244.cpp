#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long  a,b,c;
    cin>>a;
    while(cin>>a>>b>>c){
        switch(a){
            case 1:
            cout<<b+c<<endl;
            break;
            case 2:
            cout<<b-c<<endl;
            break;
            case 3:
            cout<<b*c<<endl;
            break;
            case 4:
            cout<<b/c<<endl;
            break;
        }
    }
    
}