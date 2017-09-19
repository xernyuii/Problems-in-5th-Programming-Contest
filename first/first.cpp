#include<iostream>
#include<map>
using namespace std;
 
int main(){
     freopen("1.in","r",stdin);
     freopen("1.out","w",stdout);
    int T;
    cin>>T;
    while(T--){
        map<int, int> M;
        int N;
        cin>>N;
        int str[101];
        for(int i=0;i<N;i++){
            cin>>str[i];
        }
        int p;
        cin>>p;
        int pi=0;
        for(int i=0;i<N;i++){
            if(str[i]!=p) {
                M[pi]=str[i];
                pi++;
            }
        }
        for(int i=1; i<(1<<(N-1)); i++){
            int num=0;
            int sum=0;
            for(int j=0; j<N-1; j++){
                if((i&(1<<j))==(1<<j)) {
                    sum+=M[j];
                    num++;
                }
            }
            cout<<num<<" "<<sum<<"\n";
        }
    }
     
    return 0;
}