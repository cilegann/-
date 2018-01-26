#include<iostream>
using namespace std;
int main(){
    long long times;
    cin>>times;
    for(long long t=0;t<times;t++){
        long long farmers,area,animals,eco,price=0;
        cin>>farmers;
        for(long long f=0;f<farmers;f++){
            cin>>area>>animals>>eco;
            price+=area*eco;
        }
        cout<<price<<endl;
    }
}
