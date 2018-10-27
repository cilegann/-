#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string ans;
    cin>>ans;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string guess;
        cin>>guess;
        int a=0,b=0;
        for(int i=0;i<4;i++){
            if(ans[i]==guess[i])
                a++;
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(ans[i]==guess[j]){
                    b++;
                }
            }
        }
        cout<<a<<"A"<<b-a<<"B"<<endl;
    }

}
