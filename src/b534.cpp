#include<iostream>
using namespace std;
int p[65537]={0,0,1,1};

bool isPrime(int n){
    if(p[n]!=-1){
        return p[n];
    }
    if(n==1){
        p[n]=0;
        return 0;
    }
    if(n<=2){
        p[n]=1;
        return 1;
    }
    for(int i=2;i<n;i++){
        if(!(n%i)){
            p[n]=0;
            return 0;
        }
    }
    p[n]=1;
    return 1;
}

int gcd(int a,int b){
    int tmp;
    while(a%b){
        //a一直都大於b, 讓b=a%b, a=原本b
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return b;
}

void printPrimeFactor(int n){
    int prime=2;
    int times=1;
    while(n!=1){
        int pow=0;
        while(!(n%prime)){
            pow++;
            n/=prime;
        }
        if(pow){
            if((times++)!=1){
                cout<<"*";
            }
            if(pow==1){
                cout<<prime;
            }else{
                cout<<prime<<"^"<<pow;
            }
        }
        while(!isPrime(++prime));
    }
}

int main(){
    for(int i=4;i<65536;i++){
        p[i]=-1;
    }
    int n;
    cin>>n;
    for(int nn=0;nn<n;nn++){
        int a,b;
        cin>>a>>b;
        printPrimeFactor(a);
        int gcdab=gcd(a,b);
        cout<<" , "<<gcd(a,b)<<" , ";
        if(isPrime(gcdab)){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }
}
