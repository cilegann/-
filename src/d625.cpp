#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    string mine[103]={""};
    int count[103][103]={0};
    for(int i=0;i<size+2;i++){
        mine[0]+="-";
    }
    for(int i=1;i<size+1;i++){
        string tmp;
        cin>>tmp;
        mine[i]="-"+tmp+"-";
    }
    for(int i=0;i<size+2;i++){
        mine[size+1]+="-";
    }

    for(int i=1;i<size+2;i++){
        for(int j=1;j<size+2;j++){
            if(mine[i][j]=='-'){
                for(int k=-1;k<2;k++){
                    for(int l=-1;l<2;l++){
                        if(mine[i+k][j+l]=='*'){
                            count[i][j]++;
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<size+1;i++){
        for(int j=1;j<size+1;j++){
            if(mine[i][j]=='*'){
                cout<<'*';
            }else if(count[i][j]){
                cout<<count[i][j];
            }else{
                cout<<"-";
            }
        }
        cout<<endl;
    }
}
