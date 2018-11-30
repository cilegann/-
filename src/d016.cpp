#include<iostream>
#include<stack>
using namespace std;

template<typename T>
void printStack(stack<T> a){
    cout<<"Stack: ";
    while(!a.empty()){
        cout<<" "<<a.top(); 
        a.pop();
    }
    cout<<endl;
}

bool debug=0;

int main(){
    string line;
    int cnt=0;
    while(getline(cin,line)){
        stack<int> s;
        int a=0,b=0,tmp=0;
        for(int i=0;i<line.length();i++){
            if(line[i]<='9' && line[i]>='0'){
                tmp=tmp*10+line[i]-'0';
            }else if(line[i]==' '&&tmp!=0){
                if(debug)
                    cout<<"Pushing "<<tmp<<endl;
                s.push(tmp);
                tmp=0;
            }else if(line[i]=='+'){
                if(debug)
                    printStack(s);
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(a+b);
                if(debug){
                    cout<<"+: "<<a<<" "<<b<<endl;
                    printStack(s);
                }
                i++;
            }else if(line[i]=='-'){
                if(debug)
                    printStack(s);
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b-a);
                if(debug){
                    cout<<"-: "<<a<<" "<<b<<endl;
                    printStack(s);
                }
                i++;
            }else if(line[i]=='*'){
                if(debug)
                    printStack(s);
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(a*b);
                if(debug){
                    cout<<"*: "<<a<<" "<<b<<endl;
                    printStack(s);
                }
                i++;
            }else if(line[i]=='/'){
                if(debug)
                    printStack(s);
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b/a);
                if(debug){
                    cout<<"/: "<<a<<" "<<b<<endl;
                    printStack(s);
                }
                i++;
            }else if(line[i]=='%'){
                if(debug)
                    printStack(s);
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b%a);
                if(debug){
                    cout<<"%: "<<a<<" "<<b<<endl;
                    printStack(s);
                }
                i++;
            }
        }
        cout<<s.top()<<endl;
    }
}