#include<iostream>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        int same=1;
        for(int i=0;i<a.length();i++){
            if(a[i]==a[i+1]){
                same++;
            }else{
                if(same==1)
                    cout<<a[i];
                else if(same==2)
                    cout<<a[i]<<a[i];
                else
                    cout<<same<<a[i];
                same=1;
            }
        }
        cout<<endl;
    }
}
