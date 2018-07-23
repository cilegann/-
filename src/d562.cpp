#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        //t 代表的是現在還在的範圍，一開始是 n (全部n節都還在)
        int num[n], t = n;
        //輸入
        for (int i = 0; i < n; i++){
            cin >> num[i];
        }
        //跑流程，n節會跑n次
        for (int i = 0; i < n; i++){
            //1-1. 輸出蜈蚣
            for (int j = 0; j < t; j++){
                cout << num[j] << " ";
            }
            //1-2. 輸出換行
            cout << endl;

            //2. 把第一節丟掉，也就是把後面的值全部往前移一格
            for (int j = 0; j < t - 1; j++){
                num[j] = num[j + 1];
            }

            //3. 倒過來
            for (int j = 0; j < t / 2; i++){
                int change;
                change = num[j];
                num[j] = num[t - 2 - j];
                num[t - 2 - j] = change;
            }

            //4. 現在還在的範圍要減一
            t--;
        }
    }
    return 0;
}