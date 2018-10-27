#include <iostream>
#include <stack>
#include "stdio.h"
#include <string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string pass;
    for(int nn=0;nn<n;nn++){
        stack<char> s;
        string tocheck;
        cin>>tocheck;
        if(tocheck.length()==0){
            cout<<"Yes\n";
        }else{
            bool state=1;
            for(int i=0;i<tocheck.length();i++){
                if(tocheck[i]=='('||tocheck[i]=='['){
                    s.push(tocheck[i]);
                }else{
                    if(s.size()==0){
                        state=0;
                        break;
                    }
                    if(tocheck[i]==')'){
                        if(s.top()=='('){
                            s.pop();
                        }else{
                            state=0;
                            break;
                        }
                    }else if(tocheck[i]==']'){
                        if(s.top()=='['){
                            s.pop();
                        }else{
                            state=0;
                            break;
                        }
                    }
                }
            }
            if(state){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }
}