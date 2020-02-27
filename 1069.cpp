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
ll m,n,p;
string s[1005];
map<string,ll>q;
int main()
{
    cin>>m>>n>>p;
    for(rg i=1;i<=m;i++)cin>>s[i];
    if(p>m)
    {
        cout<<"Keep going..."<<endl;
        return 0;
    }
    else
    {
        cout<<s[p]<<endl;
        q[s[p]]=1;
        for(rg i=p+n;i<=m;i+=n)
        {
            if(q[s[i]]==0)
            {
                cout<<s[i]<<endl;
                q[s[i]]=1;
            }
            else
            {
                rg tep=i+1;
                while(q[s[tep]]==1)tep++;
                cout<<s[tep]<<endl;
                q[s[tep]]=1;
                i=tep;
            }
        }
    }
    return 0;
}
