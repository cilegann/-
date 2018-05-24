#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        int Alength=a.length(),Blength=b.length();
        for(int j=0;j<101-Alength;j++){
            a='0'+a;
        }
        for(int j=0;j<101-Blength;j++){
            b='0'+b;
        }
        int add=0,cnt=0;
        for(int j=100;j>=0;j--){
            if((a[j]+b[j]-'0'-'0'+add)>9){
                cnt++;
                add=1;
            }else{
                add=0;
            }
        }
        cout<<cnt<<endl;
    }
}
