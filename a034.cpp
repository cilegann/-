#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,bin[100],index=0;
    //vector<int> r;
    while(cin>>a){
        while(a>0){
            bin[index++]=a%2;
            //r.push_back(a%2);
            a/=2;
        }
        /*
        for(int i=r.size()-1;i>=0;i--){
            cout<<r[i];
        }
        */
        for(int i=index-1;i>=0;i--){
            cout<<bin[i];
        }
        cout<<endl;
        //r.clear();
        index=0;
    }
}