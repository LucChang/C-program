#include<bits/stdc++.h>
using namespace std;
int A, B, C, D, E;
vector<int> seq;
int main(){
    cin>>A>>B>>C>>D>>E;
    seq.push_back(A);
    seq.push_back(B);
    seq.push_back(C);
    seq.push_back(D);
    seq.push_back(E);
    sort(seq.begin(), seq.end());
    int cnt = 1;
    for(int i=1;i<5;i++)
        if(seq[i] != seq[i-1])
            cnt++;

    cout<<(cnt == 2? "Yes": "No");


}