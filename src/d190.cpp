#include<iostream>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        if(!a)
            break;
        int arr[100]={0};
        for(int i=0;i<a;i++){
            int tmp;
            cin>>tmp;
            arr[tmp-1]++;
        }
        bool first=0;
        for(int i=0;i<100;i++){
            if(arr[i]>0){
               
                for(int j=0;j<arr[i];j++){
                    if(!first)
                        cout<<" ";
                    if(first)
                        first=!first;
                    cout<<i+1;
                } 
            }
        }
        cout<<endl;
    }
}
