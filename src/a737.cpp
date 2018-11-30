#include<cstdio>

#include<algorithm>

using namespace std;

int abs(int x){

    return (x>0?x:-x);

}

int main(){

    int t,m;

    while(scanf("%d",&t)){

        while(t--){

            scanf("%d",&m);

            int a[m],sum=0;

            for(int i=0;i<m;i++)
                scanf("%d",&a[i]);

            sort(a,a+m);//內建排序

            for(int i=0;i<m;i++)
                sum+=abs(a[i]-a[m/2]);//為防止有負數結果,用絕對值

            printf("%d\n",sum);

        }
    }
}