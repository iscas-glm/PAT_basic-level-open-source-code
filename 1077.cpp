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
ll n,m,a[maxn],tot;
int main()
{
    cin>>n>>m;
    for(rg i=1;i<=n;i++)
    {
        ll p=read();
        tot=0;
        memset(a,0,sizeof(a));
        ll sum=0;
        for(rg j=2;j<=n;j++)
        {
            ll x=read();
            if(x>=0&&x<=m)
            {
                a[++tot]=x;
                sum+=x;
            }
        }
        sort(a+1,a+1+tot);
        double k=(p*(tot-2)+(sum-a[1]-a[tot]))*1.0/(2*(tot-2)*1.0);
        cout<<round(k)<<endl;
    }
    return 0;
}
