#include<bits/stdc++.h>
using namespace std;
vector<char> row;
long blue = 0;
long red = 0;
char indx;
long N, A, B;
void Count(){
    long cnt = 0;
    for(char i:row){
        if(i == 'b'){
          blue+=A;
          cnt+=A;
        }else{
            cnt+=B;
            red+=B;
        }

        if(cnt >= N){
            indx = i;
            break;
        }
    }
}


long Count_all(){
    long cnt = 0;
    for(char i:row){
        if(i == 'b') cnt+=A;
        else cnt+=B;
    }
    return cnt;
}
int main(){
    cin>>N>>A>>B;
    while(!(Count_all()>=N)){
        row.push_back('b');
        row.push_back('r');


    }
    Count();
    if(indx == 'b'){
      blue = blue-(red+blue-N);
      cout<<blue;
    }else cout<<blue;

}
