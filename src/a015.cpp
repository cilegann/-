#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        vector<vector<int>> vv;
        for(int i=0;i<a;i++){
            vector<int> tmpv;
            for(int j=0;j<b;j++){
                int tmp;
                cin>>tmp;
                tmpv.push_back(tmp);
            }
            vv.push_back(tmpv);
        }
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                cout<<vv[j][i]<<" ";
            }
            cout<<endl;
        }
    }
}