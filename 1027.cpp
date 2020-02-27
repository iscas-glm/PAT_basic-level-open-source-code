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
ll a[maxn];
int main()
{
    a[1]=1;
    for(rg i=2;a[i-1]<=10000;i++)
    {
        a[i]=a[i-1]+4*i-2;
        //cout<<a[i]<<endl;
    }
    ll n;char s;
    cin>>n>>s;
    //cout<<s<<endl;
    rg k=1;
    while(a[k]<=n)k++;
    k--;
    rg tep=2*k-1;
    while(tep!=-1)
    {
        for(rg i=1;i<=(2*k-1-tep)/2;i++)cout<<" ";
        for(rg i=1;i<=tep;i++)
        {
            cout<<s;
        }
        cout<<endl;
        tep-=2;
    }
    tep+=4;
    while(tep!=2*k+1)
    {
        for(rg i=1;i<=(2*k-1-tep)/2;i++)cout<<" ";
        for(rg i=1;i<=tep;i++)
        {
            cout<<s;
        }
        cout<<endl;
        tep+=2;
    }
    cout<<n-a[k]<<endl;
   	return 0;
}
