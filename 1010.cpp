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
ll a[maxn],tot,p[maxn],cnt;
int main()
{
    while(~scanf("%lld",&a[++tot]));
    tot--;
    for(rg i=1;i<=tot;i+=2)
    {
        if(a[i]*a[i+1])
        {
            p[++cnt]=a[i]*a[i+1],p[++cnt]=a[i+1]-1;
        }

    }
    ll flag=0;
    for(rg i=1;i<=cnt;i++)
    {
        if(i==cnt)
        {
            cout<<p[i];flag=1;
        }
        else
        {
            cout<<p[i]<<" ";flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"0 0"<<endl;
    }
    return 0;
}
