#include<bits/stdc++.h>
using namespace std;

const int mxN = 1e5;
int N, K;
int seq[mxN];
int q[mxN];
#define endl '\n'
//¥ª³¬¥k³¬
int binary(int L, int R, int V){
	R = R-1;
    while(L<=R){
        int mid = (L+R)/2;
        if(seq[mid] == V)
            return mid;
        else if(seq[mid] > V)
            R = mid-1;
        else if(seq[mid] < V)
            L = mid+1;

    }
    return -1;
}
//¥ª³¬¥k¶}
// int binary(int L, int R, int V){
//     while(L<R){
//         int mid = (L+R)/2;
//         if(seq[mid] == V)
//             return mid;
//         else if(seq[mid] > V)
//             R = mid;
//         else if(seq[mid] < V)
//             L = mid+1;

//     }
//     return -1;
// }
int main(){
    cin>>N>>K;
    for(int i=0;i<N;i++)
        cin>>seq[i];
    for(int i=0;i<K;i++)
        cin>>q[i];

    sort(seq, seq+N);

    for(int i=0;i<N;i++){
        if(binary(0, N, seq[i]) != -1)
            cout<<binary(0, N, q[i])+1<<endl;
        else
            cout<<"0"<<endl;


    }

}
