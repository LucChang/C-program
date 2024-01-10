#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 2;
    bool firstnumber = true;
	vector<int> lst;
	while(n>=i){
		while(n%i == 0){
			n = n / i;
			lst.push_back(i);
			
			}
	
	  i++;
	}
  int lstsize = lst.size();
  sort(lst.begin(),lst.end());
  int cnt = 1;
  for(int i=0;i<lstsize;i++){
    if(lst[i] == lst[i+1]){
      cnt++;
    }else{
      if(cnt>1 && firstnumber == true){
        firstnumber = false;
        cout<<lst[i]<<"^"<<cnt;
      }else if(cnt>1 && firstnumber == false){
        cout<<" * "<<lst[i]<<"^"<<cnt;
      }else if(cnt >= 1 && firstnumber == true){
        firstnumber = false;
        cout<<lst[i];
      }else{
        cout<<" * "<<lst[i];
      }
    cnt = 1;
    }
  }
  
}
