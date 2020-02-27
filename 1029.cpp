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
set<char>p;
ll flag[500];
map<char,ll>m;
int main()
{
    string s,b;
    cin>>s>>b;
    for(rg i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')s[i]-=32;
    }
    for(rg i=0;b[i];i++)
    {
        if(b[i]>='a'&&b[i]<='z')b[i]-=32;
        p.insert(b[i]);
    }
    for(rg i=0;s[i];i++)
    {
       if(p.find(s[i])==p.end()&&m[s[i]]==0)
        {
            cout<<s[i];
            m[s[i]]=1;
        }
    }

   	return 0;
}
