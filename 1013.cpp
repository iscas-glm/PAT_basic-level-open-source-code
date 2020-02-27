<<<<<<< HEAD
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
ll ans[maxn],tot;
inline bool is(ll i)
{
    if(i<=1)return 0;
    if(i==2||i==3)return 1;
    for(rg k=2;k*k<=i;k++)
    {
        if(i%k==0)return 0;
    }
    return 1;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    for(rg i=1;tot<=10000;i++)
    {
        if(is(i))
        {
            ans[++tot]=i;
        }
    }
    ll cnt=0;
    for(rg i=n;i<=m;i++)
    {
        cnt++;
        cnt%10==0||i==m?cout<<ans[i]<<endl:cout<<ans[i]<<" ";
    }
   	return 0;
}
=======
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
ll ans[maxn],tot;
inline bool is(ll i)
{
    if(i<=1)return 0;
    if(i==2||i==3)return 1;
    for(rg k=2;k*k<=i;k++)
    {
        if(i%k==0)return 0;
    }
    return 1;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    for(rg i=1;tot<=10000;i++)
    {
        if(is(i))
        {
            ans[++tot]=i;
        }
    }
    ll cnt=0;
    for(rg i=n;i<=m;i++)
    {
        cnt++;
        cnt%10==0||i==m?cout<<ans[i]<<endl:cout<<ans[i]<<" ";
    }
   	return 0;
}
>>>>>>> a45269a6f9ce61abed19a3dbc4d5ff91c7b4ed44
