#include<iostream>
using namespace std;
int main(){
    int num;
    int a=0,b=0,c=0;
    cin>>num;
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        if(n%3==0){
            a++;
        }else if(n%3==1){
            b++;
        }else{
            c++;
        }
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}