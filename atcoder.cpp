#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    string s;
    vector<pair<string,int>> lst;
    cin>>n;
    while(n--){
        cin>>s>>num;
        lst.push_back(make_pair(s,num));

    }
    vector<pair<string,int>> lst2 = lst;
    for(int i=0;i<lst.size();i++){
        cout<<lst2[i].first<<" "<<lst2[i].second<<endl;
    }
}
