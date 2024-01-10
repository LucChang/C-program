#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0;
char F[500];
vector<char> Symbol;
vector<ll> segans;
int calculate(string cal){
    cout<<cal<<endl;
    int cnt = 0;
    char mode = '+';
    for(int i=0;i<cal.length();i++){
        if(cal[i] == '+'){
            mode = '+';
        }else if(cal[i] == '-'){
            mode = '-';
        }else{
            if(mode == '+'){
                cnt +=  cal[i]-'0';
            }else{
                cnt -=  cal[i]-'0';
            }
        }
    }
    return cnt;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    string cal = "";
    cin>>s;
    for(int i=0;i<s.length();i++){
        F[i] = s[i];
    }
    for(int i=0;i<s.length();i++){
        if('0'<= F[i] && F[i]<='9'){
             cal+=F[i];
        }else if(F[i] == '+' || F[i] == '-'){
             cal+=F[i];
        }else if(F[i] == '*' || F[i] == '/'){
            Symbol.push_back(F[i]);
            segans.push_back(calculate(cal));
            cal = "";
        }
        if(i == s.length()-1){
            segans.push_back(calculate(cal));
            cal = "";
        }

    }
    cout<<segans.size()<<endl;
    int result = segans[0];
    for(int i=0;i<Symbol.size();i++){
        if(Symbol[i] == '/'){
            result/=segans[i+1];
        }else if(Symbol[i] == '*'){
            result*=segans[i+1];
        }

    }
    cout<<result;

//2+3*1+2+1


}
