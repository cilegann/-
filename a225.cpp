#include<iostream>

using namespace std;
int main(){
    int a[1000];
    int n;
    while(cin>>n){
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int tmp;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(a[j]%10>a[j+1]%10){
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(a[j]%10==a[j+1]%10&&a[j]<a[j+1]){
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}