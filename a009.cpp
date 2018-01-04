#include<iostream>
using namespace std;
int main(){
    int k='*'-'1';
    string a;
    while(cin>>a){
        for(int i=0;i<a.length();i++){
            cout<<(char)(a[i]+k);
        }
        cout<<endl;
    }
}