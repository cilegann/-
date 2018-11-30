#include<iostream>
#include<algorithm>

using namespace std;

struct student{
    int course[5];

};
student stu[10000];

ostream& operator<<(ostream& os, const student& s){
    for(int i=0;i<5;i++){
        os<<s.course[i]<<" ";
    }
    return os;
}

void print(student a){
    for(int i=0;i<5;i++){
        cout<<a.course[i]<<" ";
    }
    cout<<endl;
}

bool cmp(student a,student b){
    for(int i=0;i<5;i++){
        if(a.course[i]!=b.course[i])
            return a.course[i]<b.course[i];
    }
    return 1;
}

bool same(student a,student b){
    for(int i=0;i<5;i++){
        if(a.course[i]!=b.course[i])
            return 0;
    }
    return 1;
}

int main(){
    int n;
    while(cin>>n){
        if(n==0)    break;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++)
                cin>>stu[i].course[j];
            sort(stu[i].course,stu[i].course+5);
        }
        sort(stu,stu+n,cmp);
        int cnt=1,max=0;
        for(int i=1;i<n;i++){
            cout<<"comparing "<<stu[i]<<"with"<<stu[i-1]<<endl;
            if(same(stu[i],stu[i-1])){
                cnt+=1;
            }else{
                if(cnt>max){
                    cout<<"Change max to "<<cnt<<endl;
                    max=cnt;
                }
                cnt=1;
            }
        }
        int ans=0;
        cnt=1;
        if(max==1)  ans=n;
        for(int i=1;i<n;i++){
            cout<<"comparing "<<stu[i]<<" with "<<stu[i-1]<<endl;
            if(same(stu[i],stu[i-1])){
                cnt+=1;
            }else{
                if(cnt==max){
                    cout<<"Adding "<<cnt<<" to ans"<<endl;
                    ans+=cnt;
                }
                cnt=1;
            }
        }
        if(max==1)  ans=n;
        cout<<ans<<endl;
    }

}