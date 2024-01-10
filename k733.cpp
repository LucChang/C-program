#include<bits/stdc++.h>
using namespace std;
stack<int> ord;
string s;
int n = 0;
int cal(){
   int cnt = 0;
   int first = ord.top();
   ord.pop();

   while(!ord.empty()){
         cnt += abs(first-ord.top());
         first = ord.top();
         ord.pop();
   }
   return cnt;
}
int func(int i){
    i+=1;
    string num = "";

    int len = s[i]-'0';
    for(int j=0;j<len;j++){
       for(int k=i;k<s.length();k++){
        if(s[k] == 'T' && k == i){
           continue;
        }
        if(s[k] == 'T'){
           n = stoi(num);
           ord.push(n);
           num = "";
        }else if(s[k] == 'L'){
           n = stoi(num);
           ord.push(n);
           k = func(k);
           continue;
        }else num+=s[k];
        if(s[k] == 'E'){
           i = k;
           break;
        }
    }
    }
    return i;
}
int main(){
    cin>>s;
    string num = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == 'T' && i == 0){
           continue;
        }else if(s[i] == 'L' && i == 0){
           i = func(i);
        }


        if(s[i] == 'T'){
           //cout<<num<<endl;
           n = stoi(num);
           ord.push(n);
           num = "";
        }else if(s[i] == 'L'){
           n = stoi(num);
           ord.push(n);
           i = func(i);
           continue;
        }else num+=s[i];



        if(i == s.length()-1){
           n = stoi(num);
           ord.push(n);
        }
    }
    while(!ord.empty()){
        cout<<ord.top()<<" ";
        ord.pop();
    }
    cout<<endl;
    cout<<cal()<<endl;
}
