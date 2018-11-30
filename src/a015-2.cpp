#include<iostream>
using namespace std;
int main(){
    int m,n;
    int data[100][100];
    while(cin>>m>>n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>data[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<data[j][i]<<" ";
            }
            cout<<endl;
        }
    }


}