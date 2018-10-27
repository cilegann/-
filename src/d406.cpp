#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int row,col;
    Node(){row=0;col=0;}
    Node(int row,int col){
        this->row=row;
        this->col=col;
    }
};

int main(){
    int mode; //1: upstream is allowed , 2: not allowed
    int direc_row[4]={0,0,1,-1};
    int direc_col[4]={1,-1,0,0};
    int c=1;
    while(cin>>mode){
        int row_bound,col_bound;
        cin>>row_bound>>col_bound;
        int pipe[103][103]={0};
        int arriveTime[103][103]={0};
        queue<Node> que;
        for(int r=1;r<=row_bound;r++){
            for(int c=1;c<=col_bound;c++){
                cin>>pipe[r][c];
            }
        }
        //find entry
        for(int c=1;c<=col_bound;c++){
            if(pipe[1][c]==1){
                arriveTime[1][c]=1;
                que.push(Node(1,c));
            }
        }

        while(!que.empty()){
            Node now =que.front();
            que.pop();
            for(int i=0;i<4;i++){
                if(mode==2&&i==3)
                    continue;
                int col=now.col+direc_col[i];
                int row=now.row+direc_row[i];
                if(col<1||col>col_bound||row<1||row>row_bound)
                    continue;
                if(pipe[row][col]!=1||arriveTime[row][col]!=0)
                    continue;
                arriveTime[row][col]=arriveTime[now.row][now.col]+1;
                que.push(Node(row,col));
            }
        }
        
        cout<<"Case "<<c++<<":\n";
        for(int r=1;r<=row_bound;r++){
            for(int c=1;c<=col_bound;c++){
                cout<<arriveTime[r][c]<<" ";
            }
            cout<<endl;
        }
        
    }
}