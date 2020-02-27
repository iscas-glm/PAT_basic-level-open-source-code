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
double a,b,c,d;
ll e;
ll ans[maxn],tot;
int main()
{
     char s;
     cin>>a>>s>>b>>c>>s>>d>>e;
    a=a*1.0/b,b=c*1.0/d;
    if(a>b)swap(a,b);
    for(rg i=1;i<e;i++)
    {
        double k=i/(e*1.0);
        if(k>a&&k<b&&gcd(i,e)==1)
        {
            ans[++tot]=i;
        }
    }
    for(rg i=1;i<=tot;i++)
    {
        if(i==tot)
        {
            f(ans[i],e);
            cout<<endl;
        }
        else
        {
            f(ans[i],e);
            cout<<" ";
        }
    }
   	return 0;
}
