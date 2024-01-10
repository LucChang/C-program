#include<bits/stdc++.h>
using namespace std;
char grid[1000][1000];
int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int func(int i,int j,int k, int n){
    int cnt = 0;
    if(grid[i][j] == '#'){
        cnt++;
    }
    for(int x=1;x<6;x++){
      if(j+dc[k]>n || i+dr[k]>n || j+dc[k]<n || i+dr[k]<n){
         break;
      }else{
            if(grid[i+dr[k]][j+dc[k]] == '#'){
                i = i+dr[k];
                j = j+dc[k];
                cnt++;
            }

    }
    }
    return cnt;

}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            cout<<grid[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<8;k++){
                cout<<func(i,j,k,n)<<endl;
            }
        }
    }
    cout<<"No";
}

