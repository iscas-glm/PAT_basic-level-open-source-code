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
ll a[maxn],b[maxn],c[maxn],n;
inline bool check()
{
    for(rg i=1;i<=n;i++)
    {
        if(b[i]!=a[i])return 0;
    }
    return 1;
}
inline void f(ll x)
{
    for(rg i=1;i<=n;i+=x)
    {
        if(i+x>n)sort(a+i,a+n+1);
        else sort(a+i,a+i+x);
    }
}
int main()
{
    cin>>n;
    for(rg i=1;i<=n;i++)a[i]=read();
    for(rg i=1;i<=n;i++)b[i]=read();
    ll l=0,flag=0;
    while(b[l]>=b[l-1])l++;
    for(rg i=l;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        cout<<"Insertion Sort"<<endl;
        sort(b+1,b+1+l);
        for(rg i=1;i<=n;i++)
        {
            printf(i==n?"%lld\n":"%lld ",b[i]);
        }
    }
    else
    {
        cout<<"Merge Sort"<<endl;
        ll flag=0;
        for(rg i=2;i<=n;i*=2)
        {
            f(i);
            if(flag)break;
            if(check())
            {
                flag=1;
            }
        }
        for(rg i=1;i<=n;i++)
        {
            printf(i==n?"%lld\n":"%lld ",a[i]);
        }
    }
   	return 0;
}
