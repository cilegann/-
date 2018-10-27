#include<iostream>
#include<stack>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        bool chk=1;
        for(int i=0;i<a.length()/2;i++){
            if(a[i]!=a[a.length()-i-1]){
                chk=0;
            }
        }
        if(chk)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    
}