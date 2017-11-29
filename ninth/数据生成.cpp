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
    freopen("4.in","w",stdout);
    for(int i=1;i<=4;i++)
    {
        n=1;
        for(int kase=1;kase<=n;kase++)
        {
            printf("%d\n",m=100000);
            for(int j=1;j<=m;j++)
                printf("%d ",random(0,1000000000));
            printf("\n");
            printf("%d\n",q=100000);
            for(int j=1;j<=q;j++)
                printf("%d %d\n",random(1,2),random(0,1000000000));
        }
    }
    return 0;
}
