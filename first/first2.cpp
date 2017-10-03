#include<iostream>
using namespace std;

int b[101];
int N;

void solve(int pos, int num, int sum){
    if(pos==N-2){
        if(num==0&&sum==0) return;
        cout<<num<<" "<<sum<<"\n";
        return;
    }
    solve(pos+1,num+1,sum+b[pos+1]);
    solve(pos+1,num,sum);
}
int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>N;
        int a[101];
        for(int i=0;i<N;i++) cin>>a[i];
        int p;
        cin>>p;
        int bi=0;
        for(int i=0;i<N;i++){
            if(a[i]!=p)
                b[bi++]=a[i];
        }
        
        solve(0,1,b[0]);
        solve(0,0,0);
    }
    
    
    return 0;
}