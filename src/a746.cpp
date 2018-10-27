#include<iostream>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        int land[500][500]={0};
        int x[2];
        int y[2];
        cin>>x[1]>>y[1];
        for(int i=1;i<m;i++){
            x[0]=x[1];
            y[0]=y[1];
            cin>>x[1]>>y[1];
            if(x[0]==x[1]){
                for(int i=min(y[0],y[1]);i<=max(y[0],y[1]);i++){
                    land[x[0]-1][i-1]=1;
                }
            }else{
                for(int i=min(x[0],x[1]);i<=max(x[0],x[1]);i++){
                    land[i-1][y[0]-1]=1;
                }
            }
        }
        for(int i=0;i<=n+1;i++){
            cout<<"-";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<"|";
            for(int j=0;j<n;j++){
                if(land[i][j]==1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<"|"<<endl;
        }
        for(int i=0;i<=n+1;i++){
            cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}
