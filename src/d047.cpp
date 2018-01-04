#include<iostream>
using namespace std;
int main(){
    long long num,max=0;
    cin>>num;
    for(int n=0;n<num;n++){
        long long tmp;
        cin>>tmp;
        if(tmp>max)
            max=tmp;
    }
    cout<<max;
}