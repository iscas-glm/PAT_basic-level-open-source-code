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
int main()
{
    ll n=read(),cnt1=0,cnt2=0;
    double a,b;
    cin>>a>>b;
    for(rg i=1;i<=n;i++)
    {
        ll x=read(),sum=0;
        for(rg j=1;j<=x;j++)
        {
            double k;
            cin>>k;
            if(k<a)sum++;
        }
        if(sum>x/2&&x>b)
        {
            cnt2++;
            continue;
        }
        if(sum>x/2&&x<=b)
        {
            cnt1++;
            continue;
        }
    }
    double a1=cnt1*1.0/n*100,a2=cnt2*1.0/n*100;
    cout<<fixed<<setprecision(1)<<a1<<"% "<<a2<<"%"<<endl;
   	return 0;
}
