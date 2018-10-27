#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0)
            cout<<"Ok!"<<endl;
        else if(b==0||(a%b))
            cout<<"Impossib1e!"<<endl;
        else
            cout<<"Ok!"<<endl;
    }
}