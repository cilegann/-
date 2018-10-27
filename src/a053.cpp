#include<iostream>
using namespace std;
int main(){
int score=0;
int ti;
cin>>ti;
if(ti<11){
score=6*ti;
}else if(ti>10&&ti<21){
score=60+2*(ti-10);
}else if(ti>20&&ti<41){
score=80+(ti-20);
}else{
score=100;
}
cout<<score;
return 0;
}