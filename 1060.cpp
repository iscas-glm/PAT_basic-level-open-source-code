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
ll n,a[maxn],ans;
inline bool check(ll x)
{
    return n-(upper_bound(a+1,a+1+n,x)-a)+1>=x?1:0;
}
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)a[i]=read();
    sort(a+1,a+1+n);
    ll l=0,r=n;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(check(mid))ans=mid,l=mid+1;
        else r=mid-1;
    }
    cout<<ans<<endl;
   	return 0;
}
