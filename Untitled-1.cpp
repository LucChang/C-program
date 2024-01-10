#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0;
char F[500];
vector<char> Symbol;
vector<ll> segans;
vector<ll> funcF;
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
int Ffunc(int i){
    bool cur = false;
    int cnt = 0;
    vector<int> segans1;
    vector<int> Symbol1;
    vector<int> Symbol1
    string cal = "";

    while(true){
        if(F[i] == '('){
           i++;
           continue;
        }else if('0'<=F[i] && F[i]<='9'){
            cal+=F[i];
            cnt++;
        }else if(F[i] == '+' || F[i] == '-'){
            cal+=F[i];
        }else if(F[i] == '*' || F[i] == '/'){
            Symbol1.push_back(F[i]);
            segans1.push_back(calculate(cal));
            cal = "";
        }else if(F[i] == ')'){
              if(cnt == 0){
                return 0;
              }
             segans1.push_back(calculate(cal));
             int result = segans1[0];
            for(int i=0;i<Symbol1.size();i++){
                if(Symbol1[i] == '/'){
                    result/=segans1[i+1];
                }else if(Symbol1[i] == ''){
                    result=segans1[i+1];
                }

            }


        }else if(F[i] == ','){

        }else if(F[i] == 'f'){
        }


    }

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
        }else if(F[i] == 'f'){
            segans.push_back(Ffunc(i+1));
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
        }else if(Symbol[i] == ''){
            result=segans[i+1];
        }

    }
    cout<<result;

//2+3*1+2+1
//12+f(13,2+f(8,1+2*3),1+1*f(20,4)*f(2))*2

}
