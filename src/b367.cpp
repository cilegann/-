#include<iostream>
using namespace std;
int main(){
    int a[12][12];
    int times;
    cin>>times;
    for(int t=0;t<times;t++){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        bool check=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]!=a[n-i-1][m-j-1]){
                    check=false;
                }
            }
        }
        if(check)
            cout<<"go forward"<<endl;
        else
            cout<<"keep defending"<<endl;
        

    }

    
}
