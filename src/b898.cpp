#include<iostream>
using namespace std;
string maxx(string a,string b){
    if(a.length()>b.length()){
        return a;
    }else if(b.length()>a.length()){
        return b;
    }else{
        for(int i=0;i<a.length();i++){
            if(a[i]>b[i])
                return a;
            else if(b[i]>a[i])
                return b;
        }
        return b;
    }
}
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        string b,c,d;
        cin>>b>>c>>d;
        cout<<maxx(maxx(b,c),d)<<endl;
    }
}
