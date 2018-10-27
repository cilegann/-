#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long sum=1;
    int times;
    while(cin>>times){
        for(int i=2;i<=times;i++){
            sum+=(i-1);
        }
        cout<<sum<<endl;
        sum=1;
    }
}