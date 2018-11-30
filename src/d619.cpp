#include<iostream>
#include <cmath>
using namespace std;

int table[33]={1};

void init(){
    for(int i=1;i<33;i++){
        table[i]=int(2*table[i-1]+pow(2,i-1)-1);
    }
}


int getBinSum(int n){
    if(n==1) return 1;
    else{
        if( !(n&(n-1)) ){
            return table[int(log(n)/log(2))];
        }else{
            int tmp=n;
            do{tmp--;}while( (tmp&(tmp-1)) );
            return table[int(log(n)/log(2))]+getBinSum(n-tmp)+n-tmp;
        }
    }
}

int main(){
    int n;
    init();
    while(cin>>n){
        cout<<getBinSum(n)%1000000000<<endl;
    }
}