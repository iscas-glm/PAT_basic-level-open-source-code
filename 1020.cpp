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
    double a,b,c;
}p[1005];
ll n,d,a[1005],b[1005];
inline bool cmp(const node&q,const node&w)
{
    if(q.c==w.c)return q.a>w.a;
    return q.c>w.c;
}
int main()
{
    cin>>n>>d;
    for(rg i=1;i<=n;i++)
    {
        cin>>p[i].a;
    }
    for(rg i=1;i<=n;i++)
    {
        cin>>p[i].b;
    }
    for(rg i=1;i<=n;i++)
    {
        p[i].c=p[i].b/(p[i].a*1.0);
        //cout<<p[i].c<<endl;
    }
    sort(p+1,p+1+n,cmp);
    double sum=0;
    double ans=0;
    for(rg i=1;i<=n;i++)
    {
        if(sum+p[i].a<=d)
        {
            ans+=p[i].b;
            sum+=p[i].a;
        }
        else
        {
            ans+=(d-sum)*p[i].b*1.0/(1.0*p[i].a);
            break;
        }
        //cout<<ans<<endl;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<ans<<endl;
   	return 0;
}
