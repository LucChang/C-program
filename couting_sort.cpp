#include<bits/stdc++.h>
using namespace std;
int w[256];
int main(){
    char s;
    cout.tie(0),cin.tie(0);ios::sync_with_stdio(false);
    
    while(cin>>s){
        w[int(s)]+=1;
        // cout<<int(s)<<endl;
    }
    
    
    for(int i=0;i<256;){
        if(w[i]>0){
            cout<<char(i);
            w[i]--;
            continue;
        }
        i++;
       
    }






}