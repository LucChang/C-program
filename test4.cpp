#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e6;
int candy[maxN];
int N, Q, A, B;
int Search(int num){
    int left = 0;
    int right = N;
    while(left<right){
        int mid = (right-left)/2;
        if(candy[mid] >= num && candy[mid-1] < num){
            return mid;
        }
        if(candy[mid] > num){
            right = mid;

        }else if(candy[mid] < num){
            left = mid + 1;
        }
    }
    return 0;
}

int main(){
    cin>>N>>Q;

    for(int i=0;i<N;i++){
        cin>>candy[i];
    }
    sort(candy, candy+N);
    while(Q--){
        cin>>A>>B;
        int ansA = Search(A);
        int ansB = Search(B);
        cout<<ansB-ansA<<endl;
    }




}

// sample
//5 ``````
//2 3 7 9 0
//2 6
//2 8
//1 1
