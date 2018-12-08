#include<iostream>
using namespace std;
int n;
long long arr[20],ans;

void dfs(int now,long long product){
    if(product>ans) ans=product;
    if(now==n)  return;
    dfs(now+1,product*arr[now]);    
}
 
int main(){
    int c=0;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ans=0;
        for(int i=0;i<n;i++){
            dfs(i+1,arr[i]);
        }
        cout << "Case #" << ++c << ": The maximum product is " << ans << "." << endl;
        cout << endl;
    }


}