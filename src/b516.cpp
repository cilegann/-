#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int t=0;t<times;t++){
        string a;
        cin>>a;
        for(int i=0;i<a.length();i++){
            int n=a[i]+3;
            if(n>90){
                n=65+n-90-1;
            }
            cout<<char(n);
        }
        cout<<endl;
    }
}
