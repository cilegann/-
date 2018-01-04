#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int start,max,total,now;
    while(cin>>start>>max){
        total=start;
        now=start;
        while(total<=max){
            total+=++now;
        }
        cout<<now-start+1<<endl;
    }
}