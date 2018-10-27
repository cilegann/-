#include<iostream>
using namespace std;
int main(){
    int num;
    while(cin>>num){
        float total=0;
        for(int n=0;n<num;n++){
            int a;
            cin>>a;
            total+=a;
        }
        if(total/num>59)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}