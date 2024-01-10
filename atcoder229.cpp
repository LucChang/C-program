#include<bits/stdc++.h>
using namespace std;
const int maxN = 3e5;
struct NODE{
    long long A, B;
    NODE(long long A=0, long long B=0):A(A),B(B){}
    bool operator<(const NODE rhs)const{
        return A>rhs.A;
    }
}node[maxN];
int main(){
    int N, W;
    cin>>N>>W;
    for(int i=0;i<N;i++)
        cin>>node[i].A>>node[i].B;

    sort(node, node+N);
    /*
    for(int i=0;i<N;i++)
        cout<<node[i].A<<" "<<node[i].B<<endl;
    */
    long long ans = 0;
    int i=0;
    for(i=0;i<N;i++){
        if(W-node[i].B<0) break;
        W-=node[i].B;
        ans+=node[i].A*node[i].B;
        //cout<<W<<endl;


    }
    if(W>0) ans+=node[i].A*W;


    cout<<ans<<endl;
    }
