#include<iostream>
using namespace std;
int get_factor_sum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(!(n%i))  sum+=i;
    }
    return sum;
}
int main(){
    int ts;
    while(cin>>ts){
        for(int t=0;t<ts;t++){

            int a;
            cin>>a;
            int s=get_factor_sum(a);
            if(s==a)    cout<<"perfect\n";
            else if(s<a)    cout<<"deficient\n";
            else    cout<<"abundant\n";
        }
    }
}