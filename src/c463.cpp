#include<iostream>
#include<queue>
using namespace std;
int parent[100001];
int depth[100001];
int main(){
    int n;
    while(cin>>n){
        int parent[100001];
        int depth[100001];
        int childCount[100001];
        queue<int> todo;
        for(int i=1;i<=n;i++){
            parent[i]=-1;
            depth[i]=-1;
            childCount[i]=0;
        }
        for(int i=1;i<=n;i++){
            int num_of_child;
            cin>>num_of_child;
            if(num_of_child==0){
                todo.push(i);
                depth[i]=0;
            }else{
                childCount[i]=num_of_child;
                for(int child=0;child<num_of_child;child++){
                    int tmp;
                    cin>>tmp;
                    parent[tmp]=i;
                }
            }
        }
        int me;
        while(!todo.empty()){
            me=todo.front();
            int my_parent=parent[me];
            todo.pop();
            depth[my_parent] = max( depth[my_parent],depth[me]+1 );
            childCount[my_parent]--;
            if(childCount[my_parent]==0){
                todo.push(my_parent);
            }
        }
        long long h=0;
        for(int i=1;i<=n;i++){
            h+=depth[i];
        }
        cout<<me<<endl;
        cout<<h<<endl;

    }


}