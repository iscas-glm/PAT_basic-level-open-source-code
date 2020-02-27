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
inline ll pow1(ll x,ll y)
{
    ll sum=1;
    while(y)
    {
        if(y&1)
        {
            sum*=x;
        }
        x*=x;
        y>>=1;
    }
    return sum;
}
ll m;
inline void f(ll x)
{
    rg temp=x,cnt=0;
    while(temp)
    {
        temp/=10;
        cnt++;
    }
    //cout<<cnt<<endl;
    for(rg i=1;i<=9;i++)
    {
        ll sum=i*x*x;
        if((sum-x)%pow1(10,cnt)==0)
        {
            cout<<i<<" "<<sum<<endl;
            return ;
        }
    }
    cout<<"No"<<endl;
    return ;
}
int main()
{
    cin>>m;
    for(rg i=1;i<=m;i++)
    {
        ll x=read();
        f(x);
    }
    return 0;
}
