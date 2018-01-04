#include<iostream>
#include<algorithm>
//#include<math.h>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==-1&&b==-1)
            break;
        if(a<b){
            int normal=b-a;
            int down=a+(99-b)+1;
            cout<<min(normal,down)<<endl;
        }else{
            int normal=a-b;
            int up=99-a+b+1;
            cout<<min(normal,up)<<endl;
        }
    }
}