#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    if(i<6){
        cout<<"0";
    }else if(i<12){
        cout<<"590";
    }else if(i<18){
        cout<<"790";
    }else if(i<60){
        cout<<"890";
    }else{
        cout<<"399";
    }
    return 0;

}