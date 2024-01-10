#include<bits/stdc++.h>
using namespace std;
int main(){
  int n = 8 ;
    int x = -100 ;
    for(int i = 1 ; i <= n ; i++ )
      for(int j = 1 ; j <= i; j++ )
        for(int k = 1 ; k <= j; k++ )
            x++;
   cout<<x;
}

