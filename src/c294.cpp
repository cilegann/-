#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        int minn,midd,maxx;
        if(a>=b&&a>=c){
            maxx=a;
            if(b>=c){
                midd=b;
                minn=c;
            }else{
                midd=c;
                minn=b;
            }
        }else if(b>=a&&b>=c){
            maxx=b;
            if(a>=c){
                midd=a;
                minn=c;
            }else{
                midd=c;
                minn=a;
            }
        }else{
            maxx=c;
            if(a>=b){
                midd=a;
                minn=b;
            }else{
                midd=b;
                minn=a;
            }
        }
        cout<<minn<<" "<<midd<<" "<<maxx<<endl;
        if(minn+midd<=maxx){
            cout<<"No"<<endl;
        }else if(minn*minn+midd*midd==maxx*maxx){
            cout<<"Right"<<endl;
        }else if(minn*minn+midd*midd<maxx*maxx){
            cout<<"Obtuse"<<endl;
        }else{
            cout<<"Acute"<<endl;
        }
    }
}