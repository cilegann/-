#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int row=(n+1)/2;
        int head= (row)*(row)*2-1;
        cout<<head*3-6<<endl;

    }
}