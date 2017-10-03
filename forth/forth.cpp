#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int a[10000011];
int main(){
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);

    int T;
    scanf("%d",&T);
    while(T--){
        memset(a,0,sizeof(a));
        int N;
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            int t1,t2,n;
            scanf("%d%d%d",&t1,&t2,&n);
            a[t1]+=n;
            a[t2+1]-=n;
        }
        int maxp=0;
        int mpi=0;
        int p=0;
        for(int i=0;i<=10000000;i++){
            p+=a[i];
            if(p>maxp){
                mpi=i;
                maxp=p;
            }
        }
        printf("%d\n",mpi);
    }
    return 0;
}