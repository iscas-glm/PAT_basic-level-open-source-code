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
ll n,a[maxn],b[maxn];
ll tot;
struct node
{
    ll val,num;
}ans[maxn];
inline bool cmp(const node &a,const node &b)
{
    if(a.val==b.val)return a.num<b.num;
    return a.val<b.val;
}
int main()
{
    cin>>n;
    ll maxx=-inf;
    for(rg i=1;i<=n;i++)a[i]=read(),b[i]=a[i];
    sort(b+1,b+1+n);
    for(rg  i=1;i<=n;i++)
    {
        //cout<<b[i]<<endl;
        maxx=max(maxx,a[i]);
        if(a[i]==maxx&&a[i]==b[i])
        {
            ans[++tot].val=a[i];
            ans[tot].num=i;
        }
    }
    cout<<tot<<endl;
    sort(ans+1,ans+1+tot,cmp);
    for(rg i=1;i<=tot;i++)
    {
        i==tot?printf("%lld",ans[i].val):printf("%lld ",ans[i].val);
    }
    printf("\n");
   	return 0;
}
