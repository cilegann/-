#include<iostream>
using namespace std;
int main(){
    int times;
    cin>>times;
    for(int i=0;i<times;i++){
        int walls;
        cin>>walls;
        int high=0,low=0,o,n;
        cin>>o;
        for(int j=1;j<walls;j++){
            cin>>n;
            if(n>o)
                high++;
            if(n<o)
                low++;
            o=n;
        }
        cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
