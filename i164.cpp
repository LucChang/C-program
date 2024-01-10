#include<bits/stdc++.h>
using namespace std;

const int MaxN=1e5;
const int MaxA=1e5+1;
const int INF=INT_MAX;
int N, ans;
int A[MaxN];
int B[MaxN];
int p[MaxA]; //上一次出現的位置
int toL[MaxN];
int toR[MaxN];
int main(){
	// input
	cin>>N;
	for(int n=0; n<N; n+=1)
		cin>>A[n];
	for(int n=0; n<N; n+=1)
		cin>>B[n];
	// 往左看
	fill(p+1, p+MaxA, -1);
	fill(toL, toL+N, INF);
	fill(toR, toR+N, INF);
	for(int n=0; n<N; n+=1){
		p[ B[n] ]=n;
		if( p[ A[n] ]!=-1 )
			toL[n]=n-p[ A[n] ];
	}
	fill(p+1, p+MaxA, -1);
	for(int n=N-1; 0<=n; n-=1){
		p[ B[n] ]=n;
		if( p[ A[n] ]!=-1 )
			toR[n]=p[ A[n] ]-n;
	}

	for(int n=0; n<N; n+=1){
		ans=min(toL[n],toR[n]);
		if( ans==INF )
			ans=-1;
		cout<<ans<<" ";
	}

}


