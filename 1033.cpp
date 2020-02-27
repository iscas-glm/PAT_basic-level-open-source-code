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
set<char>p;
int main()
{
    getline(cin,a);
    getline(cin,b);
    bool flag=0;
    for(rg i=0;a[i];i++)
    {
        if(a[i]=='+')flag=1;
        else
        {
            if(a[i]>='A'&&a[i]<='Z')p.insert(a[i]),a[i]+=32;
            //if(a[i]=='_')a[i]=' ';
            p.insert(a[i]);
        }
    }
    for(rg i=0;b[i];i++)
    {
        if(p.find(b[i])!=p.end())
        {
            continue;
        }
        if(flag==1&&(b[i]>='A'&&b[i]<='Z'))continue;
        cout<<b[i];
    }
   	return 0;
}
