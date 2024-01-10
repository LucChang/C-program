

#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e2;
#define endl '\n'
struct NODE{
    int x, y;
    NODE(int x=0, int y=0):x(x),y(y){}

}node[maxN];

bool comp(NODE lhs, NODE rhs){
    return lhs.x>rhs.x;

}
double dis(int dx, int dy){

    return sqrt(dx*dx+dy*dy);

}
int main(){
    int C, N;
    cin>>C;
    while(C--){
        cin>>N;
        for(int i=0;i<N;i++)
            cin>>node[i].x>>node[i].y;
        double ans = 0;
        sort(node, node+N, comp);
        int nowY = node[0].y;

        for(int i=1;i<N;i++){
            if(node[i].y<= nowY)
                continue;
            ans+=dis(node[i].x-node[i-1].x, node[i].y-node[i-1].y)*(node[i].y-nowY)/(node[i].y-node[i-1].y);
            nowY = node[i].y;


        }
        cout<<"enter"<<endl;
        cout<<fixed<<setprecision(2)<<ans<<endl;

    }



}
