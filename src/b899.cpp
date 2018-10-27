#include<iostream>
#include<math.h>
using namespace std;
class dot{
public:
    float x;
    float y;
    dot(){cin>>this->x>>this->y;}
    dot(int x,int y){this->x=x;this->y=y;}
    double distance(dot d){
        return sqrt(pow((this->x-d.x),2)+pow((this->y-d.y),2));
    }
};

int main(){
    dot a;
    dot b;
    dot c;
    double ab=a.distance(b);
    double ac=a.distance(c);
    double bc=b.distance(c);
    if(ab>ac&&ab>bc){
        float x,y;
        x=(a.x+b.x)/2;
        y=(a.y+b.y)/2;
        cout<<2*x-c.x<<" "<<2*y-c.y<<endl;
    }else if(ac>ab&&ac>bc){
        float x,y;
        x=(a.x+c.x)/2;
        y=(a.y+c.y)/2;
        cout<<2*x-b.x<<" "<<2*y-b.y<<endl;
    }else{
        float x,y;
        x=(b.x+c.x)/2;
        y=(b.y+c.y)/2;
        cout<<2*x-a.x<<" "<<2*y-a.y<<endl;
    }
}
