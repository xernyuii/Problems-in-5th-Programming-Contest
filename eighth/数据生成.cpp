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
    int n,m,p,q;
    LL t;
    freopen("5.in","w",stdout);
    m=1000000;
    printf("%d\n",m);
    for(int kase=1;kase<=m;kase++)
    {
        p=4;
        t=0;
        for(int i=1;i<=p;i++)
            t=t*10000+random(1,9999);
        printf("%lld\n",t);
    }
    return 0;
}
