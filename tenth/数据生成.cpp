#include<bits/stdc++.h>
#define clr(x) memset(x,0,sizeof(x))
#define clr_1(x) memset(x,-1,sizeof(x))
#define LL long long
#define mod 1000000007
#define random(x,y) (rand()%(y-x+1)+x)
using namespace std;
int main()
{
    srand((unsigned)time(0));
    int n,m,q;
    LL p;
    freopen("1.in","w",stdout);
    n=random(1,10000);
    for(int i=1;i<=n;i++)
    {
        m=random(1,4);
        p=0;
        for(int j=1;j<=m;j++)
            p=p*10000+random(0,9999);
        m=random(0,1);
        for(int j=1;j<=m;j++)
            p=p*10+random(0,9);
        if(p<2) p=2;
        printf("%lld\n",p);
    }
    return 0;
}
