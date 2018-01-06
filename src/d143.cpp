#include<iostream>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int i=0;i<times;i++){
        int x,y;
        cin>>x>>y;
        if(x==y)
            cout<<"="<<endl;
        if(x>y)
            cout<<">"<<endl;
        if(x<y)
            cout<<"<"<<endl;

    }
    return 0;

}