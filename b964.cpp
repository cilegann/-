#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int s[22];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n);
        for(int i=0;i<n;i++){
            if(i){
                cout<<" "<<s[i];
            }else{
                cout<<s[i];
            }
        }
        cout<<endl;
        int lucky=101;
        int unlucky=-1;
        for(int i=0;i<n;i++){
            if(s[i]>=60 && s[i]<lucky){
                lucky=s[i];
            }
            if(s[i]<60 && s[i]>unlucky){
                unlucky=s[i];
            }
        }
        if(unlucky==-1){
            cout<<"best case"<<endl;
        }else{
            cout<<unlucky<<endl;
        }
        if(lucky==101){
            cout<<"worst case"<<endl;
        }else{
            cout<<lucky<<endl;
        }
    }
    
}
