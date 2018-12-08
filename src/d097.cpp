#include<iostream>
using namespace std;
int seq[3005];
int main(){
    int n;
    while(cin>>n){
        bool used[3005]={0};
        for(int i=0;i<n;i++){
            cin>>seq[i];
        }
        bool ans=1;
        for(int i=1;i<n;i++){
            int offset=abs(seq[i]-seq[i-1]);
            if(offset<n){
                if(used[offset]==0){
                    used[abs(seq[i]-seq[i-1])]=1;
                }else{
                    ans=0;
                    break;
                }
            }else{
                ans=0;
                break;
            }
        }
        if(ans) cout<<"Jolly\n";
        else    cout<<"Not jolly\n";
    }
}