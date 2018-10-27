#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int odd=0,even=0;
    for(int i=0;i<str.size();i++){
        if(i%2)
            odd+=str[i]-'0';
        else
            even+=str[i]-'0';
    }
    cout<<abs(odd-even)<<endl;
}