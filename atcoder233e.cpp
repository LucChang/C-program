#include<bits/stdc++.h>
using namespace std;
deque<int> lst;
//using ll = long long;
string prefix_sum(string w){
    lst.push_back(w[0]-'0');
    for(int i=1;i<w.length();i++){
        lst.push_back(lst[i-1]+w[i]-'0');

    }

    int carry = 0;
    string sum = "";
    for(int i=lst.size()-1; ;i--){
       if(i == lst.size()-1){
         carry = lst[i]/10;
         lst[i] = lst[i]%10;
         continue;
       }
       if(i == -1){
           if(carry > 0){
             lst.push_front(carry);
             carry = 0;
           }
           break;
       }
       lst[i] += carry;
       carry = lst[i]/10;
       lst[i] %= 10;




    }

    for(int i=0;i<lst.size();i++){
        sum += to_string(lst[i]);
        //cout<<sum<<endl;

    }
    return sum;





}
int main(){
    string N;
    cin>>N;
    cout<<prefix_sum(N)<<endl;

}

    //11105
