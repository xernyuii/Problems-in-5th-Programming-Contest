#include<bits/stdc++.h>
#define clr(x) memset(x,0,sizeof(x))
#define clr_1(x) memset(x,-1,sizeof(x))
#define LL long long
#define mod 1000000007
using namespace std;
const int N=1e5+10;
int n,m,k,t,q,T;
LL x[N],y[N];
int main()
{
//    freopen("10.in","r",stdin);
//    freopen("10.out","w",stdout);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%lld",&x[i]);
        for(int i=1;i<=n;i++)
            scanf("%lld",&y[i]);
        printf("linmiaomiao\n");
    }
    return 0;
}
