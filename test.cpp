#include<bits/stdc++.h>
using namespace std;
int N, M, K, r, c, s, t;
const int maxN = 1e2;
int grid[maxN][maxN] = {};
vector<pair<int, int>> pos;
vector<pair<int, int>> demon;

int main(){
    cin>>N>>M>>K;
    for(int i=0;i<K;i++){
        cin>>r>>c>>s>>t;
        demon.push_back(make_pair(r, c));

        pos.push_back(make_pair(s,t));

    }
    int cnt = K;
    int j = 0;
    
    // for(int i=0;i<demon.size();i++){
    // 	cout<<demon[i].first<<" "<<demon[i].second<<endl;
    // }
    // for(int i=0;i<pos.size();i++){
    // 	cout<<pos[i].first<<" "<<pos[i].second<<endl;
    // }
    while(true){

        vector<pair<int, int>> now(1000);
        vector<pair<int, int>> kill;
        

        for(int i=0;i<K;i++){
            if(pos[i].first == 1000){
                continue;
            }
                grid[demon[i].first][demon[i].second]--;
                now[i].first  = pos[i].first+demon[i].first;
                now[i].second = pos[i].second+demon[i].second;
                grid[demon[i].first][demon[i].second]--;
                // for(int k=0;k<N;k++){
                // 	for(int x=0;j<M;x++){
                // 		cout<<grid[k][x];
                // 	}cout<<endl;
                // }
      
        }
        for(int i=0;i<K;i++){
            if(grid[now[i].first][now[i].second] < 0 ){
                kill.push_back(make_pair(now[i].first,now[i].second));
                cnt--;
                pos[i].first = 1000;

            }else if(now[i].first<0 || now[i].first>=M || now[i].second < 0 || now[i].second >= N){
            	cnt--;
            	pos[i].first = 1000;
            }else if(grid[now[i].first][now[i].second]>=0){
                demon[i].first = now[i].first;
                demon[i].second = now[i].second;
                

            }
        }
        for(int i=0;i<kill.size();i++){
           cout<<kill[i].first<<" "<<kill[i].second<<endl;
           grid[kill[i].first][kill[i].second]++;
        }
        if(cnt <= 0){
            break;
        }

        
    }
    int total = 0;
    for(int i=0;i<N;i++)
    	for(int j=0;j<M;j++)
    		if(grid[i][j]<0)
    			total++;
    cout<<total<<endl;  
                for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cout<<grid[i][j]<<" ";
        }cout<<endl;
        }cout<<endl;
 
}
