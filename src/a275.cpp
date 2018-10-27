#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char a1[1000000];
char a2[1000000];
int main(){
    int f,f1;
    while(scanf("%s",&a1)==1){
        if(a1[0]=='S'&&a1[1]=='T'&&a1[2]=='O'&&a1[3]=='P'&&a1[4]=='!'&&a1[5]=='!')break;
        scanf("%s",&a2);
        int b1[100]={0};
        int b2[100]={0};
        for(int i=0;a1[i]!='\0';i++){
            f1=0;
            for(int j=33;j<=126;j++){
                if(a1[i]==j){
                    b1[j-33]++;
                    f1++;
                }
                if(a2[i]==j){
                    b2[j-33]++;
                    f1++;
                }
                if(f1==2)break;
            }
        }
        f=0;
        for(int i=0;i<94;i++){
            if(b1[i]!=b2[i]){
                f=1;
                break;
            }
        }
        if(f==0)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
