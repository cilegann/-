#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int t=0;t<times;t++){
        int a,b,total=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(sqrt(i)==int(sqrt(i)))
                total+=i;
        }
        cout<<"Case "<<t+1<<": "<<total<<endl;
    }
}