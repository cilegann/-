#include<iostream>
#include<vector>
using namespace std;
int main(){
    int times;
    vector<int> v;
    while(cin>>times){
        for(int i=0;i<times;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for (int c = 0 ; c < ( v.size() - 1 ); c++){
            for (int d = 0 ; d < v.size() - c - 1; d++){
                if (v[d] > v[d+1]) /* For decreasing order use < */{
                    int swap       = v[d];
                    v[d]   = v[d+1];
                    v[d+1] = swap;
                }
            }
        }
        for(int i=0;i<times;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
}