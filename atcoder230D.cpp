#include<bits/stdc++.h>
using namespace std;
const int mxN = 2e5;
struct NODE{
    int L, R;
    NODE(int L=0, int R=0):L(L),R(R){}

}node[mxN];
int N, D;
int main(){
    cin>>N>>D;

    for(int i=0;i<N;i++)
        cin>>node[i].L>>node[i].R;


    sort(node, node+N, [](NODE lhs, NODE rhs){
         return lhs.R<rhs.R;
         });

    int result = 1;
    int nowY = node[0].R-1;
    for(int i=1;i<N;i++){
        if(node[i].L>nowY+D){
            nowY = node[i].R-1;
            result++;
        }


    }
    cout<<result;


}
