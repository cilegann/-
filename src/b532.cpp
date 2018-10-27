#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    while(cin>>str){
        int a=0,b=0,i;
        char operation;
        for(i=0;i<str.length();i++){
            if(str[i]>=48&&str[i]<=57){
                a*=10;
                a+=(str[i]-'0');
            }
            else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%'){
                operation=str[i];
                break;
            }
        }
        for(i=i;i<str.length();i++){
            if(str[i]>=48&&str[i]<=57){
                b*=10;
                b+=(str[i]-'0');
            }
        }
        switch(operation){
            case '+':
                cout<<a+b<<endl;
                break;
            case '-':
                cout<<a-b<<endl;
                break;
            case '*':
                cout<<a*b<<endl;
                break;
            case '/':
                cout<<a/b<<endl;
                break;
            case '%':
                cout<<a%b<<endl;
        }
        
    }
    
    
}
