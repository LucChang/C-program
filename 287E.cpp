#include<bits/stdc++.h>
using namespace std;
const int maxN = 5e5;
string ss[maxN];
int ord[maxN];
int ans[maxN] = {};
int LCP(int a, int b, int l = 0){
    while(ss[a][l] != '\0' and ss[b][l] != '\0' and ss[a][l]==ss[b][l]){
        l+=1;
    }
    return l;

}
bool comp(int lhs, int rhs){
    return ss[lhs]<ss[rhs];
}
int main(){
    int N;
    int x;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>ss[i];
    }
    iota(ord, ord+N, 0);
    sort(ord, ord+N, comp);
    for(int i=1; i<N;i++){
        x=LCP(ord[i-1], ord[i]);
        ans[ord[i-1]] = max(ans[ord[i-1]], x);
        ans[ord[i]] = max(ans[ord[i-1]],x);

    }
    for(int i=0;i<N;i++){
        cout<<ans[i]<<endl;
    }
}
