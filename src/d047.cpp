#include<iostream>
using namespace std;

int mod(string bigNumber,int divisor)
{
    int ans=0;;
    for(int i=0;i<bigNumber.size();i++)
    {
        ans = ans*10 + bigNumber[i]-'0';
        ans = ans % divisor;
    }
    return ans;
}


bool isLeap(string year){
    if(mod(year,4)!=0){
        return false;
    }else{
        //the year which can be divided by 4 will come in
        //if the suspected-leap year can be divided by 100,see if it can be divided by 400 as well(if yes, then leap;if not, then non-leap). If the suspect cannot be divided by 100, then leap.
        if(mod(year,100)==0){
            if(mod(year,400)==0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }
}
int main(){
    string year;
    bool isL=0,isH=0,isB=0;
    while(cin>>year){
        isL=isLeap(year);
        isH=!(mod(year,15));
        isB=(!(mod(year,55)))&&isL;
        if(isL)
            cout<<"This is leap year."<<endl;
        if(isH)
            cout<<"This is huluculu festival year."<<endl;
        if(isB)
            cout<<"This is bulukulu festival year."<<endl;
        if(!(isL||isB||isH))
            cout<<"This is an ordinary year."<<endl;
        cout<<endl;
        isL=0;
        isH=0;
        isB=0;
    }
    
    
}
