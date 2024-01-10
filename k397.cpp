#include<bits/stdc++.h>
using namespace std;
int N, M, period;
const int maxN = 100;
struct NODE{
    int s, e;
    NODE(int s=0, int e=0):s(s), e(e){}
    bool operator<(const NODE rhs)const{
        return s<rhs.s;

    }


}time_N[maxN];


struct NODE1{
    int s, e;
    NODE1(int s=0, int e=0):s(s), e(e){}
    bool operator<(const NODE1 rhs)const{
        return s<rhs.s;

    }

}time_M[maxN];



int main(){
    cin>>N>>M;

    for(int i=0;i<N;i++)
        cin>>time_N[i].s>>time_N[i].e;


    for(int i=0;i<M;i++)
        cin>>time_M[i].s>>time_M[i].e;


    cin>>period;


    sort(time_N, time_N+N);
    sort(time_M, time_M+M);

    for(int i=0, j=0;i<N && j<M;){
        if(time_N[i].e <time_M[j].s)
            i++;
        else if(time_M[j].e <time_N[i].s)
            j++;
        else{
            if((time_N[i].s<=time_M[j].s) && time_N[i].e-time_N[i].s >= period && time_M[j].e-time_M[j].s >= period &&time_N[i].e-time_M[j].s>=period){
                cout<<time_M[j].s<<" "<<time_M[j].s+period;
                return 0;
            }else if((time_N[i].s>time_M[j].s) && time_N[i].e-time_N[i].s >= period && time_M[j].e-time_M[j].s >= period && time_M[j].e-time_N[i].s>=period){
                cout<<time_N[i].s<<" "<<time_N[i].s+period;
                return 0;
            }

          if(time_N[i].e>=time_M[j].e) j++;

          else i++;



        }

    }
    cout<<-1;


}
