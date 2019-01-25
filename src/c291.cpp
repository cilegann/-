#include<iostream>
using namespace std;

int N, members[50005], i, now;
bool visited[50005];
int ans;

int main()
{
    while( cin >> N )
    {
        for( i=0 ; i<N ; i++ )
        {
            cin >> members[i]; //輸入每個人的最好朋友編號
            visited[i] = false; //還沒被算進小群體的人為false，預設都是false
        }

        ans = 0;//群體數量一開始為0
        for( i=0 ; i<N ; i++ ) //針對每個人檢查他的小群體
        {
            if( !visited[i] )//如果這個人還沒被算進小群體中
            {
                ans++;//建立新的小群體
                now = i;
                //開始一個一個人加進小群體
                while( !visited[now] )//還沒拜訪過的人則把他加入群體
                {
                    visited[now] = true;//設定為拜訪過
                    now = members[now];//繼續找下一個
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
