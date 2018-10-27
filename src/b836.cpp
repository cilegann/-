#include<iostream>
using namespace std;
int main(){
    long n,m;
    while(cin>>n>>m){
        //prevent TLE
        if ( 0 == m ) {
            cout << "Go Kevin!!" << endl;
            continue;
        }
        long ba=1;
        while(n>0){
            n-=ba;
            ba+=m;
        }
        if(n==0)
            cout<<"Go Kevin!!"<<endl;
        else
            cout<<"No Stop!!"<<endl;
    }
}