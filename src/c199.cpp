
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> height;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            if(height.empty()||height.back()!=tmp){
                height.push_back(tmp);
            }

        }
        int cnt=0;
        for(int i=1;i<height.size()-1;i++){
            if(height[i]>height[i-1]&&height[i]>height[i+1])
                    cnt++;
        }
        cout<<cnt<<endl;
    }
}
