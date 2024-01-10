#include<bits/stdc++.h>
using namespace std;
const int maxN = 100;
const int maxV = 1e6;
int N, M;
vector<int> R;
int recur(vector<int> F, vector<int> S){
    int cnt = 0;
    R.push_back(S[cnt]/F[0]);
    S[cnt+1] = S[cnt+1]-F[1]*R[cnt];
    cnt++;
    if(cnt == M+N){
        return 0;
    }
    return recur( F, S);





}
int main(){
    cin>>N>>M;
    vector<int> F(N+1);
    vector<int> S(N+M+1);


    for(int i=0;i<N+1;i++)
        cin>>F[i];

    for(int i=0;i<N+M+1;i++)
        cin>>S[i];


    reverse(F.begin(),F.end());
    reverse(S.begin(),S.end());
    recur(F, S);
    for(int i = 0;i<R.size();i++){
        cout<<R[i]<<endl;
    }
}
