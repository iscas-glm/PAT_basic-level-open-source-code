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
inline ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
inline void f(ll a,ll b)
{
    ll k=gcd(a,b);
    cout<<a/k<<'/'<<b/k;
    return ;
}
map<ll,ll>p;
set<ll>ans;
ll k[maxn],tot;
int main()
{
    ll n;
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
        ll a,b;
        cin>>a>>b;
        p[a]=b,p[b]=a;
    }
    ll x=read();
    for(rg i=1;i<=x;i++)
    {
        ll c=read();
        ans.insert(c);
    }
    for(auto it:ans)
    {
        ll f=p[it];
        if(ans.find(f)==ans.end())
        {
            k[++tot]=it;
        }
    }
    cout<<tot<<endl;
    sort(k+1,k+1+tot);
    for(rg i=1;i<=tot;i++)
    {

        i==tot?cout<<setw(5)<<setfill('0')<<k[i]:cout<<setw(5)<<setfill('0')<<k[i]<<" ";
    }
   	return 0;
}
