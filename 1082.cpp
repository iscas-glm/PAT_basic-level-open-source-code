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
ll n;
struct node
{
    ll num,x,y,d;
}p[10005];
inline bool cmp(const node &a,const node &b)
{
    return a.d<b.d;
}
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)
    {
        cin>>p[i].num>>p[i].x>>p[i].y;
        p[i].d=p[i].x*p[i].x+p[i].y*p[i].y;
    }
    sort(p+1,p+1+n,cmp);
    cout<<fixed<<setw(4)<<setfill('0')<<p[1].num<<" "<<fixed<<setw(4)<<setfill('0')<<p[n].num<<endl;
    return 0;
}
