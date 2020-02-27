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
set<ll>ans;
int main()
{
    ll n;
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
        ll x=read(),sum=0;
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        ans.insert(sum);
    }
    ll cnt=0;
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cnt++;
        if(cnt!=ans.size())
        {
            cout<<it<<" ";
        }
        else cout<<it<<endl;
    }
   	return 0;
}
