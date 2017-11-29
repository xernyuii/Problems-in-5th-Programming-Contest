#include<bits/stdc++.h>
#define clr(x) memset(x,0,sizeof(x))
#define clr_1(x) memset(x,-1,sizeof(x))
#define LL long long
#define mod 1000000007
using namespace std;
const int N=1e5+10;
struct Node
{
    int next[2];
};
struct Trie
{
    Node node[N*33];
    int cnt;
    void init()
    {
        cnt=0;
        clr_1(node);
    }
    void add(LL x)
    {
        int t,u=0;
        for(int i=31;i>=0;i--)
        {
            t=(x>>i)&1;
            if(node[u].next[t]==-1)
            {
                node[u].next[t]=++cnt;
            }
            u=node[u].next[t];
        }
        return ;
    }
    LL query(LL x)
    {
        int t,u=0;
        LL ans=0;
        for(int i=31;i>=0;i--)
        {
            t=(x>>i)&1;
            ans<<=1;
            if(node[u].next[t^1]==-1)
            {
                ans|=t;
                u=node[u].next[t];
            }
            else
            {
                ans|=t^1;
                u=node[u].next[t^1];
            }
        }
        return ans;
    }
}trie;
int n,m,k,t,q;
int main()
{
//    freopen("4.in","r",stdin);
//    freopen("4.out","w",stdout);
    while(scanf("%d",&n)!=EOF)
    {
        trie.init();
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&k);
            trie.add((LL)k);
        }
        scanf("%d",&q);
        for(int i=1;i<=q;i++)
        {
            scanf("%d%d",&t,&k);
            if(t==1)
                trie.add((LL)k);
            else
                printf("%lld\n",trie.query((LL)k));
        }
        printf("\n");
    }
    return 0;
}
