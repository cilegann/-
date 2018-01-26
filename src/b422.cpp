#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a[1000][1000];
    int h,w;
    cin>>w>>h;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            double r,g,b;
            cin>>r>>g>>b;
            a[i][j]=round((r+g+b)/3);
        }
    }
    cout<<w<<" "<<h<<endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            for(int k=0;k<3;k++){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}
