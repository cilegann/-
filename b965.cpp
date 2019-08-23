#include<iostream>
using namespace std;
int main(){
    int r,c,m;
    while(cin>>r>>c>>m){
        int b[10][10];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>b[i][j];
            }
        }
        int ope[10];
        for(int mi=0;mi<m;mi++){
            cin>>ope[mi];
        }
        for(int mi=m-1;mi>=0;mi--){
            int cmd=ope[mi];
            if(cmd){
                for(int j=0;j<c;j++){
                    for(int i=0;i<r/2;i++){
                        int tmp=b[i][j];
                        b[i][j]=b[r-i-1][j];
                        b[r-i-1][j]=tmp;
                    }
                }
            }else{
                int tmp[10][10];
                for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                        tmp[c-j-1][i]=b[i][j];
                    }
                }                
                int tmpr=r;
                r=c;
                c=tmpr;
                for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                        b[i][j]=tmp[i][j];
                    }
                }
            }
        }
        cout<<r<<" "<<c<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(j){
                    cout<<" "<<b[i][j];
                }else{
                    cout<<b[i][j];
                }
            }
            cout<<endl;
        }
    }
}
