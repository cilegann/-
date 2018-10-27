#include<iostream>
using namespace std;
int main(){
    int n,m,a[10000],b[10000],count=0;
    cin>>n>>m;
    for(int times=0;times<n;times++){
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        int i=0;
        int j=0;
        while(i<m&&j<m){
            if(a[i]==b[j]){
                count++;
                i++;
                j++;
            }else if(a[i]<b[j])
                i++;
            else
                j++;
        }
        cout<<count<<endl;
        count=0;
    }
}