#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int maxN = 1e3;
int seq[maxN];
int N;
vector<int> r;

int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>seq[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
            if(seq[j] > seq[j+1]){
                swap(seq[j], seq[j+1]);
                r.push_back(j+1);
            }
        }


    }
    
    for(int i=0;i<r.size();i++)
        cout<<r[i]<<endl;
    

}