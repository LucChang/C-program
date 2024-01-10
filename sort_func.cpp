#include<bits/stdc++.h>
using namespace std;
const int maxN = 5e5;
int seq[maxN];
int seq1[maxN];
int N;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>seq[i];
    
    for(int i=0;i<N;i++)
        cin>>seq1[i];

    sort(seq, seq+N);
    sort(seq1, seq1+N);
    
    for(int i=0;i<N;i++){
        if(seq1[i] != seq[i]){
            cout<<0;
            exit(0);
        }
    }
    cout<<1;
}