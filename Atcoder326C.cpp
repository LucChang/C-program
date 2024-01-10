#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, M;
    cin>>N>>M;
    int row[N];
    for(int i=0;i<N;i++)
        cin>>row[i];

    sort(row, row+N);
    int ans = 0;
    int j=0;
    for(int i=0;i<N;i++){
        for(;;){
        if(j<N && row[j]<row[i]+M){
           // cout<<j<<" "<<i<<endl;
            ans = max(ans, abs(j-i+1));
            j++;
            continue;

           }
        break;
    }

    }
    cout<<ans;

}
