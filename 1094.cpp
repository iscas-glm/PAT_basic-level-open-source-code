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
ll l,k;
string s;
inline bool f( ll x)
{
    for(rg i=2;i*i<=x;i++)
    {
        if(x%i==0)return 0;
    }
    return 1;
}
int main()
{
    cin>>l>>k;
    cin>>s;
    for(rg i=0;i+k-1<l;i++)
    {
        ll sum=0;
        for(rg j=i;j<=i+k-1;j++)
        {
            sum=sum*10+s[j]-48;
        }
        //cout<<sum<<endl;
        if(f(sum))
        {
            cout<<fixed<<setfill('0')<<setw(k)<<sum<<endl;
            return 0;
        }
    }
    cout<<404<<endl;
    return 0;
}
