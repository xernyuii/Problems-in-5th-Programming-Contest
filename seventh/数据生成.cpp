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
    freopen("9.in","w",stdout);
    printf("%d\n",m=1);
    for(int kase=1;kase<=m;kase++)
    {
        printf("%d\n",n=100000);
        for(int i=1;i<=n;i++)
        {
            p=random(1,4);
            for(int j=1;j<=p;j++)
                printf("%d",random(1,9999));
            printf(" ");
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            p=random(1,4);
            for(int j=1;j<=p;j++)
                printf("%d",random(1,9999));
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
