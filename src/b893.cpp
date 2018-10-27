#include<iostream>
#include<math.h>
using namespace std;
int main(){
    while(1){
        long long a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
            cout<<"Too many... = =\""<<endl;
        }
        bool ifany=0;
        for(int x=-36;x<=36;x++){
            int first=a*pow(x,5)+b*pow(x,4)+c*pow(x,3)+d*pow(x,2)+e*x+f;
            int second=a*pow(x,5)+b*pow(x,4)+c*pow(x,3)+d*pow(x,2)+e*x+f;
            if(first==0){
                cout<<x<<" "<<x<<endl;
                ifany=1;
            }else if(first*second<0){
                cout<<x<<" "<<x+1<<endl;
                ifany=1;
            }
        }
        if(!ifany)
            cout<<"N0THING! >\\\\\\<"<<endl;
    }
}