#include<iostream>
#include<math.h>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        for(int i=0;i<a.length()-1;i++){
            cout<<abs(a[i+1]-a[i]);
        }
        cout<<endl;
    }
    
}