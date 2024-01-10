#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    while(cin>>N && N>0){
       for(int i=1;i<=N;i++){
          for(int j=1;j<=N-i;j++)
            cout<<"_";

          for(int j=N-i+1;j<=N;j++)
            cout<<"+";
        cout<<endl;
       }
       cout<<endl;

    }
}
