#include<iostream>
using namespace std;
int main(){
    int max;
    while(cin>>max){
        if(max==0)
            return 0;
        for(int i=1;i<max;i++){
            if(i%7){
                if(i==1)
                    cout<<1;
                else
                    cout<<" "<<i;
            }   
        }
        cout<<endl; 
    }
}