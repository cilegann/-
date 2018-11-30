#include<iostream>
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    for(int t=0;t<ts;t++){
        int x,y,z;
        cin>>x>>y>>z;
        if(z>=y){
            cout<<"Poor Snail"<<endl;
        }else{
            cout<<(x-y)/(y-z)+1<<endl;
        }
    }
    return 0;
}
