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
ll a[1005][1005],n,m;
ll ans[maxn],tot;
struct node
{
    ll id,num;
}sum[1005];
inline bool cmp(const node&a,const node &b)
{
    if(a.num==b.num)return a.id<b.id;
    return a.num>b.num;
}
int main()
{
    cin>>n>>m;
    for(rg i=1;i<=n;i++)sum[i].id=i;
    for(rg i=1;i<=m;i++)
    {
        for(rg j=1;j<=n;j++)a[i][j]=read(),sum[j].num+=a[i][j];
    }
    sort(sum+1,sum+1+n,cmp);
    ll k=sum[1].num,tep=1;
    cout<<k<<endl;
    while(sum[tep].num==k&&tep<=n)
    {
        ans[++tot]=sum[tep].id;
        tep++;
    }
    for(rg i=1;i<=tot;i++)
    {
        i==tot?cout<<ans[i]<<endl:cout<<ans[i]<<" ";
    }
    return 0;
}
