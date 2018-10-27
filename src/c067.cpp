#include<iostream>
using namespace std;
int main(){
    int walls,set=1;
    while(cin>>walls){
        if(!walls)
            break;
        else{
            int wall[50],total=0;
            for(int i=0;i<walls;i++){
                cin>>wall[i];
                total+=wall[i];
            }
            int avg=total/walls,toMove=0;
            for(int i=0;i<walls;i++){
                if(wall[i]>avg){
                    toMove+=(wall[i]-avg);
                }
            }
            cout<<"Set #"<<set++<<endl;
            cout<<"The minimum number of moves is "<<toMove<<".\n\n";
        }
    }
}
