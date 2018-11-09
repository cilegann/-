#include<iostream>
using namespace std;
int data[10][10];
int row,col;
void unrotate(){
    int tmp[10][10]={0};
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            tmp[j][i]=data[i][col-j-1];
        }
    }
    int t=row;
    row=col;
    col=t;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            data[i][j]=tmp[i][j];
        }
    }
}

void unflip(){
    int tmp[10][10]={0};
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            tmp[i][j]=data[row-i-1][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            data[i][j]=tmp[i][j];
        }
    }
}

void print_matrix(){
    cout<<row<<" "<<col<<endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            cout << data[i][j] << " ";
        cout << endl;
    }
}

int main(){
    int m;
    while(cin>>row>>col>>m){
        int cmd[10];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>data[i][j];
            }
        }
        for(int i=0;i<m;i++){
            cin>>cmd[i];
        }
        for(int i=m-1;i>=0;i--){
            if(cmd[i])
                unflip();
            else
                unrotate();
        }
        print_matrix();
        cout<<endl;
    }
}