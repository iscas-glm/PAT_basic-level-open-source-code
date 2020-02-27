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
    string a,b;
    ll num;
}p[maxn];
inline bool cmp(const node &a,const node &b)
{
    return a.num<b.num;
}
int main()
{
    ll n=read();
    for(rg i=1;i<=n;i++)
    {
        cin>>p[i].a>>p[i].b>>p[i].num;
    }
    sort(p+1,p+1+n,cmp);
    cout<<p[n].a<<" "<<p[n].b<<endl<<p[1].a<<" "<<p[1].b<<endl;
    return 0;
}
