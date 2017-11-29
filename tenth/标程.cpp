#include<bits/stdc++.h>
#define clr(x) memset(x,0,sizeof(x))
#define LL long long
#define mod 1000000007
using namespace std;
LL quick_pow(LL x, LL n) {
    LL res = 1;
    x=(x%mod+mod)%mod;
    while(n) {
        if(n&1)
            res=res*x% mod;
        n >>=1;
        x =x*x% mod;
    }
    return res;
}
int main()
{
//    freopen("5.in","r",stdin);
//    freopen("5.out","w",stdout);
    LL n,m,q,l,ans,k,kk;
    int t;
    while(scanf("%lld",&n)!=EOF)
    {
        t=0;
        n--;
        m=n;
        while(m)
        {
            t++;
            m>>=1;
        }
        q=1;
        m=(q<<(t-1));
        ans=(m%mod)*((1+m)%mod)%mod;
        ans=ans*quick_pow(2,mod-2)%mod;
        n-=m;
        kk=1;
        k=2;
        while(k<=n+kk)
        {
            ans=(ans%mod+(((n+kk)/k)%mod)*((kk%mod)*(kk%mod)%mod+1)%mod)%mod;
            if(k==LLONG_MAX)
                break;
            kk=k;
            k<<=1;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
