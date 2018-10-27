#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a>>b;
    for(a;a<=b;a++){
        if(!(a%2))
            c+=a;
    }
    cout<<c;
}