#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int N, D;
struct NODE{
    int L, R;
    NODE(int L=0, int R=0):L(L), R(R);


}node[maxN];
int main(){

    cin>>N>>D;

    for(int i=0;i<N:i++)
        cin>>node[i].L>>node[i].R;

    sort(node, node+N, [](NODE lhs, NODE rhs){
            return lhs.L<rhs.L;

         });
    int nowY = node[0].R;

    for(int i=1;i<N;i++){
        if(node[i].L > nowY+N)
            continue;
            int

    }


}
