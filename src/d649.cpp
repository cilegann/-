#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n){
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i;j++){
                cout<<"_";
            }
            for(int j=0;j<i;j++){
                cout<<"+";
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>n;
    }



}