#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int N, Q, A, B;
int lst[maxN];
int Search(int num){
    int left = 0;
    int right = N;
    while(left<right){
        int mid = (left+right)/2;
        if(lst[mid]>=num && lst[mid-1]<num){
        	// cout<<mid<<endl;
            return mid;
        }
        if(num>=lst[mid]){
            left = mid+1;
        }else if(num<=lst[mid]){
        	right = mid;
        }
    }
    return 0;
}
int main(){
    cin>>N>>Q;
    for(int i=0;i<N;i++){
      cin>>lst[i];
    }
    sort(lst, lst+N);
    while(Q--){
        cin>>A>>B;
        int ansA = Search(A);
        int ansB = Search(B);
        cout<<ansA<<" "<<ansB<<endl;
        if(ansB-ansA <= 0){
        	cout<<"The candies are too short"<<endl;
        }else cout<<ansB-ansA<<endl;

    }
}


//7 1
//2 2 2 3 7 9 0
//2 6

//0 2 2 2 3 7 9


