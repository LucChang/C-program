#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
struct NODE{
    int x,y;
    NODE(int x=0, int y=0):x(x),y(y){}
    bool operator<(const NODE rhs)const{
        return(x == rhs.x)? (y>rhs.y) : (x>rhs.x);

    }

}node[maxN+1];
int main(){
    int N;
    string s;
    cin>>N;
    int X = 0, Y = 0;
    cin>>s;
    node[0].x = 0;
    node[0].y = 0;
    for(int i=1;i<=N;i++){
        if(s[i-1] == 'R'){
            X++;
        }else if(s[i-1] == 'L'){
            X--;
        }else if(s[i-1] == 'U'){
            Y++;
        }else if(s[i-1] == 'D'){
            Y--;
        }
        node[i].x = X;
        node[i].y = Y;



    }
    sort(node, node+N+1);

    for(int i=1;i<=N;i++){
        if(node[i].x == node[i-1].x && node[i].y == node[i-1].y){
            cout<<"Yes";
            return 0;
        }
    }



    cout<<"No";
}
