#include<iostream>
using namespace std;
int main(){
    int size,num_of_data;
    while(cin>>size>>num_of_data){
        int** foods = new int*[size];
        for(int i=0;i<size;i++){
            foods[i]=new int[size];
        }
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cin>>foods[i][j];
            }
        }
        for(int n=0;n<num_of_data;n++){
            int x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;
            int sum=0;
            for(int i=x1-1;i<x2;i++){
                for(int j=y1-1;j<y2;j++){
                    sum+=foods[i][j];
                }
            }
            cout<<sum<<endl;
        }
    }

}