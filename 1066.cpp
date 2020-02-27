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
ll a,b,c,d,e;
ll p[505][505];
int main()
{
    cin>>a>>b>>c>>d>>e;
    for(rg i=1;i<=a;i++)
    {
        for(rg j=1;j<=b;j++)
        {
            p[i][j]=read();
            if(p[i][j]>=c&&p[i][j]<=d)p[i][j]=e;
        }
    }
    for(rg i=1;i<=a;i++)
    {
        for(rg j=1;j<=b;j++)
        {
          j==b?cout<<setw(3)<<setfill('0')<<p[i][j]:cout<<setw(3)<<setfill('0')<<p[i][j]<<" ";
        }
        cout<<endl;
    }
   	return 0;
}
