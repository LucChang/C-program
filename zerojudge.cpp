#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int n, h, m;
    cin>>n;
    cin>>h>>m;
    vector<int> lst(n);
    vector<int> lst1(n);
    for(int i=0;i<n;i++){
        cin>>lst[i];
    }
    for(int i=0;cin>>n && n>0;i++){
        lst1[i] = n;
    }
    for(int i:lst1){
            h+=lst[i-1];
            if(h>=60){
                m+=1;
                h=h%60;
            }
            if(m>=24){
                m=m%24;
            }
        cout<<h<<" "<<m<<endl;            
        
    }


 }
