#include<iostream>
using namespace std;
int main(){
    int days;
    cin>>days;
    int total=0;
    for(int i=1;i<=days;i++){
        int manto;
        cin>>manto;
        total+=manto*i;
    }
    cout<<total;

}