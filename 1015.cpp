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
ll n,l,h;
struct node
{
    string a;
    ll x,y;
}p[maxn],q[maxn],p1[maxn],p2[maxn];
inline bool cmp(const node &c,const node &b)
{   
    if(c.x+c.y==b.x+b.y&&c.x==b.x)return c.a<b.a;
    if(c.x+c.y==b.x+b.y)return c.x>b.x;
    return c.x+c.y>b.x+b.y;
}
int main()
{
    cin>>n>>l>>h;
    ll tot=0,tot1=0,tot2=0,tot3=0;
    for(rg i=1;i<=n;i++)
    {
        string tep;
        ll a,b;
        cin>>tep>>a>>b;
        if(a>=h&&b>=h)
           {
               q[++tot1].a=tep,q[tot1].x=a,q[tot1].y=b;
           }
        else if(a>=h&&b>=l)
        {
           p[++tot].a=tep,p[tot].x=a,p[tot].y=b;
        }
        else if(a>=l&&b>=l&&a>=b)
        {
             p1[++tot2].a=tep,p1[tot2].x=a,p1[tot2].y=b;
        }
        else if(a>=l&&b>=l)
        {
             p2[++tot3].a=tep,p2[tot3].x=a,p2[tot3].y=b;
        }
    }
    sort(q+1,q+1+tot1,cmp);
    sort(p+1,p+1+tot,cmp);
    sort(p1+1,p1+1+tot2,cmp);
    sort(p2+1,p2+1+tot3,cmp);
    cout<<tot1+tot2+tot3+tot<<endl;
    for(rg i=1;i<=tot1;i++)
    {
        cout<<q[i].a<<" "<<q[i].x<<" "<<q[i].y<<endl;
    }
     for(rg i=1;i<=tot;i++)
    {
        cout<<p[i].a<<" "<<p[i].x<<" "<<p[i].y<<endl;
    }
     for(rg i=1;i<=tot2;i++)
    {
        cout<<p1[i].a<<" "<<p1[i].x<<" "<<p1[i].y<<endl;
    }
     for(rg i=1;i<=tot3;i++)
    {
        cout<<p2[i].a<<" "<<p2[i].x<<" "<<p2[i].y<<endl;
    }
   	return 0;
}
