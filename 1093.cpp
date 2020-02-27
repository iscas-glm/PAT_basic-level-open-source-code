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
string a,b;
map<char,ll>q,f;
int main()
{
    getline(cin,a);
    getline(cin,b);
    for(rg i=0;a[i];i++)q[a[i]]++;
    for(rg i=0;b[i];i++)q[b[i]]++;
    for(rg i=0;a[i];i++)
    {
        if(f[a[i]])continue;
        if(q[a[i]]==1)cout<<a[i];
        else if(q[a[i]]>1)
        {
            cout<<a[i];
            f[a[i]]=1;
        }
    }
    for(rg i=0;b[i];i++)
    {
        if(f[b[i]])continue;
        if(q[b[i]]==1)cout<<b[i];
        else if(q[b[i]]>1)
        {
            cout<<b[i];
            f[b[i]]=1;
        }
    }
    return 0;
}
