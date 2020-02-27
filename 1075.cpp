// luogu-judger-enable-o2
#include<bits/stdc++.h>
#include<unordered_set>
#define rg register ll
#define inf 2147483647
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
#define ll long long
#define maxn 300005
#define lb(x) (x&(-x))
const double eps = 1e-6;
using namespace std;
inline ll read()
{
	char ch = getchar(); ll s = 0, w = 1;
	while (ch < 48 || ch>57) { if (ch == '-')w = -1; ch = getchar(); }
	while (ch >= 48 && ch <= 57) { s = (s << 1) + (s << 3) + (ch ^ 48); ch = getchar(); }
	return s * w;
}
inline void write(ll x)
{
	if (x < 0)putchar('-'), x = -x;
	if (x > 9)write(x / 10);
	putchar(x % 10 + 48);
}
struct node
{
    ll val,add,next;
}p[maxn],ans[maxn],q[maxn];
int main()
{
    ll first,n,k,temp,tot=0;
    cin>>first>>n>>k;
    for(rg i=1;i<=n;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ans[a].add=a,ans[a].val=b,ans[a].next=c;
        if(ans[a].add==first)
        {
            temp=ans[a].add;
        }
    }
    while(temp!=-1)
    {
        q[++tot].add=temp;
        q[tot].val=ans[temp].val;
        q[tot].next=ans[temp].next;
        temp=ans[temp].next;
    }
    /*for(rg i=1;i<=tot;i++)
    {
         cout<<setw(5)<<setfill('0')<<q[i].add<<" "<<q[i].val<<" "<<setw(5)<<setfill('0')<<q[i].next<<endl;
    }*/
    ll tott=0;
    for(rg i=1;i<=tot;i++)
    {
        if(q[i].val<0)
        {
            p[++tott]=q[i];
        }
    }
    for(rg i=1;i<=tot;i++)
    {
        if(q[i].val>=0&&q[i].val<=k)
        {
            p[++tott]=q[i];
        }
    }
    for(rg i=1;i<=tot;i++)
    {
        if(q[i].val>k)
        {
            p[++tott]=q[i];
        }
    }
    for(rg i=1;i<tott;i++)
    {
        p[i].next=p[i+1].add;
    }
    p[tott].next=-1;
    for(rg i=1;i<tott;i++)
    {
        cout<<setw(5)<<setfill('0')<<p[i].add<<" "<<p[i].val<<" "<<setw(5)<<setfill('0')<<p[i].next<<endl;
    }
    cout<<setw(5)<<setfill('0')<<p[tott].add<<" "<<p[tott].val<<" "<<-1<<endl;
    return 0;
}
