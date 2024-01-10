#include <bits/stdc++.h>
using namespace std;

int main() {
   int cnt = 5;
   int n;
   cin>>n;
   int n1 = n/cnt;
   vector<int> lst;
   n-=n1;
   lst.push_back(n1);
   for(int i=1;i<=4;i++){
     n1 = n/(cnt-i);
     lst.push_back(n1);
     n-=n1;

   }
   for(int i=0;i<5;i++){
    cout<<lst[i]<<" ";
   }

}

