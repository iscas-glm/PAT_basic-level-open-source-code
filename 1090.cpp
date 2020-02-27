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
ll n,m,ans[1005];
vector<ll>v[100005];
int main()
{
    cin>>n>>m;
    for(rg i=1;i<=n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b),v[b].push_back(a);
    }
    for(rg i=1;i<=m;i++)
    {
        ll x=read(),flag=0;
        set<ll>t;
        for(rg j=1;j<=x;j++)
        {
            ll q=read();
            ans[j]=q;
            t.insert(q);
        }
        for(rg j=1;j<=x;j++)
        {
            for(rg i=0;i<v[ans[j]].size();i++)
            {
                if(t.find(v[ans[j]][i])!=t.end())
                {
                    flag=1;
                    cout<<"No"<<endl;
                    break;
                }
            }
            if(flag)break;
        }
        if(flag==0)cout<<"Yes"<<endl;
    }
    return 0;
}
