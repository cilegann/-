#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0)
            break;
        while(1){
            bool end=0;
            bool ok=1;
            int a_head=1;
            stack<int> stk;
            stk.push(1);
            int t;
            for(int i=0;i<n;i++){
                cin>>t;
                if(!t){
                    end=1;
                    break;
                }
                while(a_head<=n && (stk.empty() || stk.top()!=t)){
                    stk.push(a_head++);
                }

                if(stk.empty()||stk.top()!=t)   ok=0;
                else    stk.pop();

            }
            if(end) break;
            if(ok)  cout<<"Yes"<<endl;
            else    cout<<"No"<<endl;
        }
        cout<<endl;
    }
}