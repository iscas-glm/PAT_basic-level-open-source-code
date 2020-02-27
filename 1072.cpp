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
set<ll>t;
int main()
{
    ll n,m;
    cin>>n>>m;
    for(rg i=1;i<=m;i++)
    {
        ll x=read();
        t.insert(x);
    }
    ll sum=0,tot=0;
    for(rg i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        ll k=read(),cnt=0;
        vector<ll>ans;
        for(rg j=1;j<=k;j++)
        {
            ll x=read();
            if(t.find(x)!=t.end())ans.push_back(x);
        }
        if(ans.size())
        {
            cout<<s<<": ";
            tot++;
            for(auto it:ans)
            {
                cnt++;
                sum++;
                cnt==ans.size()?cout<<setw(4)<<setfill('0')<<it<<endl:cout<<setw(4)<<setfill('0')<<it<<" ";
            }
        }
    }
    cout<<tot<<" "<<sum<<endl;
   	return 0;
}
