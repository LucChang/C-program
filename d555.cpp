
#include<bits/stdc++.h>
using namespace std;
const int maxN = 5e5;
#define endl '\n'
struct NODE{
    int x, y;
    NODE(int x=0, int y=0):x(x),y(y){}



}node[maxN];


bool comp(NODE lhs, NODE rhs){
    return(lhs.x==rhs.x)? lhs.y>rhs.y: lhs.x>rhs.x;


}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int N;





    for(int t=1;cin>>N;t++){

        for(int i=0;i<N;i++)
            cin>>node[i].x>>node[i].y;



        sort(node, node+N, comp);



        vector<pair<int, int>> recordpos;
        int nowY = node[0].y;


        for(int i=1;i<N;i++){
            if(node[i].y<=nowY)
                continue;

            recordpos.push_back(make_pair(node[i].x,node[i].y));
            nowY = node[i].y;

        }

        cout<<"Case "<<t<<":"<<endl;
        cout<<"Dominate Point: "<<recordpos.size()<<endl;
        for(int i=0;i<N;i++)
            cout<<"("<<recordpos[i].first<<","<<recordpos[i].second<<")"<<endl;

    }


}
