#include<iostream>
using namespace std;
int main(){
int h,m;
cin>>h>>m;
int conv=h*60+m;
if(conv>=450&&conv<1020){
cout<<"At School";
}else{
cout<<"Off School";
}
}