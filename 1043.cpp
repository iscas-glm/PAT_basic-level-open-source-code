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
ll a[10];
string p="PATest";
int main()
{
    string s;
    cin>>s;
    for(rg i=0;s[i];i++)
    {
        if(s[i]=='P')a[1]++;
        if(s[i]=='A')a[2]++;
        if(s[i]=='T')a[3]++;
        if(s[i]=='e')a[4]++;
        if(s[i]=='s')a[5]++;
        if(s[i]=='t')a[6]++;
    }
    ll k=*min_element(a+1,a+1+6);
    for(rg i=1;i<=k;i++)cout<<p;
    for(rg i=1;i<=6;i++)a[i]-=k;;
    while(*max_element(a+1,a+1+6)>0)
    {
        for(rg i=1;i<=6;i++)
        {
            if(a[i]>0)
            {
                cout<<p[i-1];
                a[i]--;
            }
        }
    }
   	return 0;
}
