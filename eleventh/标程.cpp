#include<bits/stdc++.h>
#define clr(x) memset(x,0,sizeof(x))
#define clr_1(x) memset(x,-1,sizeof(x))
#define clrmax(x) memset(x,0x3f3f3f3f,sizeof(x))
#define mod 1000000007
#define LL long long
using namespace std;
const int maxN=2e3+100;
int f[maxN][maxN];
int flow[maxN][maxN];
int c[maxN];
int cost[maxN][20],fa[maxN][20];
bool chose[maxN];
int N,n,m,k,ans,p;
int dfs(int u,int dep,int sta)//sta前从右往左第dep+1位开始是该结点分配的B方式的数量，1~dep位为其祖先结点na和nb的大小相对关系，表现为B收费为1，A收费为0。
{
    if(f[u][sta]!=0x3f3f3f3f) return f[u][sta];
    int num=sta>>dep;
    int fasta=sta^(num<<dep);
    //该结点的收费选择chos
    int chos=(1<<(N-dep))-num>=num?1:0;
    //叶子结点处理返回
    if(dep==N)
    {
        int v=u-(n-1);
        fasta<<=1;
        fasta|=chos;
        if(num^chose[v])
            f[u][sta]=c[v];
        else
            f[u][sta]=0;
        for(int i=N;i>=0;i--)
        {
            if(!((fasta&1)^num))
                f[u][sta]+=cost[v][i];
            fasta>>=1;
        }
        return f[u][sta];
    }
    //约束左右结点取B的数量在合理范围内，并选择其中最小的一个和。
    int minx=max(0,num-(1<<N-dep-1));
    int maxx=min(num,1<<N-dep-1);
    for(int i=minx;i<=maxx;i++)
        f[u][sta]=min(dfs(u<<1,dep+1,(i<<dep+1)|(fasta<<1|chos))+dfs(u<<1|1,dep+1,(num-i<<dep+1)|(fasta<<1|chos)),f[u][sta]);
    return f[u][sta];
}
int main()
{
    scanf("%d",&N);
    n=1<<N;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&p);
        chose[i]=p;
    }
    for(int i=1;i<=n;i++)
        scanf("%d",&c[i]);
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            scanf("%d",&flow[i][j]);
    //计算子结点i（树上编号为i+n-1)在深度为j的祖先
    for(int i=1;i<=n;i++)
    {
        k=i+n-1;
        for(int j=N;j>=0;j--)
        {
            fa[i][j]=k;
            k>>=1;
        }
    }
    clr(cost);
    //若i，j在深度为k处祖先相同，那末将流量费用flow[i,j]加到i和j在深度k所需要的费用中。
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            for(int k=N;k>=0;k--)
                if(fa[i][k]==fa[j][k])
                {
                    cost[i][k]+=flow[i][j];
                    cost[j][k]+=flow[i][j];
                    break;
                }
    clrmax(f);
    ans=0x3f3f3f3f;
    for(int i=0;i<=n;i++)
        ans=min(ans,k=dfs(1,0,i));
    printf("%d\n",ans);
    return 0;
}
