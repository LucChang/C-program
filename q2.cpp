#include<bits/stdc++.h>
using namespace std;
int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<vector<int>> box(n, vector<int>(3));
    vector<int> lst;
    vector<int> bodysize;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>box[i][j];
        }
    }
    int cnt = 0;
    int L,W,H;
    cin>>L>>W>>H;
    bodysize.push_back(L);
    bodysize.push_back(W);
    bodysize.push_back(H);
    sort(bodysize.begin(),bodysize.end());
    // for(int i=0;i<n;i++){
    //   sort(box[i].begin(),box[i].begin()+3);

    // }
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<box[i][j]<<" ";
    //     }cout<<endl;
    // }

    for(int i=0;i<n;i++){
    	lst.clear();
        int cur = false;
        for(int j=0;j<3;j++){
        	lst.push_back(box[i][j]);
        }
        sort(lst.begin(),lst.end());
    	for(int j=0;j<3;j++){
    		if(lst[j]>=bodysize[j]){
    		   cur = true;
    		}else{
    			cur = false;
    			break;
    		}

    		// cout<<box[i][j]<<" ";
    		}
       if(cur == true){
       	cnt++;
       }
    	// cout<<endl;
    }

    cout<<cnt;

}
