#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int seq[maxN];
int N;
int main(){
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>seq[i];
    sort(seq, seq+N);
    int cnt = 1;
    for(int i=1;i<N;i++){
        if(seq[i] != seq[i-1])
            cnt++;
    }
    cout<<cnt;
    return 0;
}