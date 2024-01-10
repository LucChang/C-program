#include<bits/stdc++.h>
using namespace std;
int grid[30][50];
int ar[4] = {0, 1, 2, 3};
int ac[4] = {0, 0, 0, 0};
int br[3] = {0, 0, 0};
int bc[3] = {0, 1, 2};
int cr[4] = {0, 0, 1, 1};
int cc[4] = {0, 1, 0, 1};
int dr[4] = {0, 1, 1, 1};
int dc[4] = {0, 0, -1, -2};
int er[5] = {0, 1, 1, 2, 2};
int ec[5] = {0, 0, -1, 0, -1};

int Empty(int t, int C, int R, int r[], int c[], int len){
    int pos = C;

    for(int i = C-1;i>=0;i--){
        bool cur = false;
        for(int j=0;j<len;j++){
            if(grid[t+r[j]][i+c[j]] == 1 || t+r[j]<0 || t+r[j]>= R){
               cur = true;
               break;
            }
        }

        if(cur) break;
        pos = i;

    }
    return pos;

}
int main(){
    int R, C ,N, t;
    char y;
    cin>>R>>C>>N;
    int cnt = 0;
    int block = 0;
    bool fit = false;
    while(N--){
       cin>>y>>t;

       if(y == 'A'){
         int n = Empty(t,C, R, ar, ac,4);
         if(C-n<1){
            cnt++;
            continue;
         }


            for(int j=0;j<4;j++)
                grid[t+ar[j]][n+ac[j]] = 1;

       }else if(y == 'B'){
         int n = Empty(t,C, R, br, bc,3);
         if(C-n<3){
            cnt++;
            continue;
         }


            for(int j=0;j<3;j++)
                grid[t+br[j]][n+bc[j]] = 1;

       }else if(y == 'C'){
         int n = Empty(t,C, R, cr, cc,4);
         if(C-n<2){
            cnt++;
            continue;
         }

            for(int j=0;j<4;j++)
                grid[t+cr[j]][n+cc[j]] = 1;

       }else if(y =='D'){
         int n= Empty(t,C, R, dr, dc,4);
         if(n>=C){
            cnt++;
            continue;
         }

            for(int j=0;j<4;j++)
                grid[t+dr[j]][n+dc[j]] = 1;

       }else if(y == 'E'){
         int n= Empty(t,C, R, er, ec,5);
         if(n>=C){
            cnt++;
            continue;
         }


            for(int j=0;j<5;j++)
                grid[t+er[j]][n+ec[j]] = 1;

       }





       }


    int cnt1 = 0;
    for(int i=0;i<R ;i++)
        for(int j=0;j<C;j++)
            if(grid[i][j] != 1)
                cnt1++;



    cout<<cnt1<<" "<<cnt;




}
