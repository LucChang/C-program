/*#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(m);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int losea= 0;
	int loseb = 0;
	int cnt = n-1;
	int cnt1 = m-1;
	vector<int> times(n);
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i=0;cnt>=0 && cnt1>=0;i++){
		if(a[cnt]>b[cnt1]){
			times[cnt] = cnt1+1;
			cnt--;
			loseb+=cnt1+1;

		}else if(a[cnt] == b[cnt1]){
			cnt--;
		}else{
			cnt1--;
			losea+=cnt+1;
		}


	}


		for(int i=0;i<times.size();i++){
			// cout<<times[]
			if(times[i] != 0 && (times[i])>losea-loseb){
				cout<<a[i]<<endl;
				exit(0);
			}

		}

	cout<<-1;
}*/




//amend version
#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5;
int N, M;
int A[maxN];
int B[maxN];
int main(){
	cin>>N>>M;
	for(int i=0;i<N;i++)
		cin>>A[i];
	for(int i=0;i<M;i++)
		cin>>B[i];

	sort(A, A+N);
	sort(B, B+M);

	long W=0, L=0;
	for(int m=0, n=0; n<N; n+=1){
		while(m<M and B[m]<A[n])
			m+=1;
		W+=m;
	}
	for(int n=0, m=0; m<M; m+=1){
		while(n<N and A[n]<B[m])
			n+=1;
		L+=n;
	}

    int w=0;
    int l=0;
	for(int n=0; n<N; n+=1){
		while(w<M and  B[w]<A[n])
			w+=1;
		while(l<M and B[l]<=A[n])
			l+=1;
		if( M-l<=w and L+(M-l)<w+W ){
			cout<<A[n];
			return 0;
		}
	}
	cout<<-1;



}
