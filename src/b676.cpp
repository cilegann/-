#include<iostream>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        switch(x%5){
            case 0:
                cout<<"U"<<endl;
                break;
            case 1:
                cout<<"G"<<endl;
                break;
            case 2:
                cout<<"Y"<<endl;
                break;
            case 3:
                cout<<"T"<<endl;
                break;
            case 4:
                cout<<"I"<<endl;
                break;

        }

    }
    return 0;
}
