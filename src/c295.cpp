#include<iostream>
using namespace std;

int main(){
    int N,M;
    while(cin>>N>>M){
        int S=0;
        int biggest[20]={0};
        for(int i=0;i<N;i++){
            int candidate;
            for(int j=0;j<M;j++){
                cin>>candidate;
                if(candidate>biggest[i]){
                    biggest[i]=candidate;
                }
            }
            S+=biggest[i];
        }
        cout<<S<<endl;
        int divided=0;
        for(int i=0;i<N;i++){
            if(S%biggest[i]==0){
                divided++;
            }
        }
        if(divided==0){
            cout<<-1;
        }else{
            int printed=0;
            for(int i=0;i<N;i++){
                if(S%biggest[i]==0){
                    cout<<biggest[i];
                    if(++printed!=divided){
                        cout<<" ";
                    }
                }
            }
        }
        

    }
}