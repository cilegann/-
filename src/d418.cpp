#include<iostream>
#include<stack>
using namespace std;
int main(){
    long long input;
    int times;
    cin>>times;
    for(int t=0;t<times;t++){
    while(cin>>input){
        stack<int> ans;
        if(input==1)
            cout<<1<<endl;
        else{
            for(int i=9;i>1;i--){
                while( !(input%i) ){
                    ans.push(i);
                    input/=i;
                }
            }
            if(input>1){
                cout<<-1<<endl;
            }else{
                while(!ans.empty()){
                    cout<<ans.top();
                    ans.pop();
                }
                cout<<endl;
            }
        }

    }
    }
}