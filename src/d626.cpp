#include<iostream>
using namespace std;

string m[101];

void fill(int x,int y){
    if(m[x][y]=='-'){
        m[x][y]='+';
        fill(x-1,y);
        fill(x+1,y);
        fill(x,y+1);
        fill(x,y-1);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    int x,y;
    cin>>x>>y;
    fill(x,y);
    for(int i=0;i<n;i++){
        cout<<m[i]<<endl;
    }
}