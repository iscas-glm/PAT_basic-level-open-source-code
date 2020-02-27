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
char s;
ll a,b,c,d,e,f;
int main()
{
    cin>>a>>s>>b>>s>>c>>d>>s>>e>>s>>f;
    ll sum1=a*29*17+b*29+c,sum2=d*29*17+e*29+f;
    if(sum2<sum1)putchar('-');
    ll k=abs(sum1-sum2);
    cout<<k/(29*17)<<"."<<k%(29*17)/29<<'.'<<k%(29*17)%29<<endl;
   	return 0;
}
