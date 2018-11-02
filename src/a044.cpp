#include<iostream>
using namespace std;
/*第 k 個面
會被前 (k - 1) 個面畫出 (k - 1) 條交叉線
交叉線將第 k 個面分割成 1+1+2+...+(k-1)=1+k(k+1)/2 個區塊，此區塊數即第 k 個面在空間上所增加的空間數
*/
/*
http://www.csghs.tp.edu.tw/Zhongshan/student/91science/M2.pdf
*/
int lineCutter(int n){
    if(n==1) return 2;
    return lineCutter(n-1)+n;
}

int surfaceCutter(int n){
    if(n==1) return 2;
    return surfaceCutter(n-1)+lineCutter(n-1);
}

int main(){
    int n;
    while(cin>>n){
        cout<<surfaceCutter(n)<<endl;
    }
}