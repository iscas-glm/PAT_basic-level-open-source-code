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
inline bool cmp(const ll &a,const ll &b)
{
    return a>b;
}
ll n,flag[5005],ans[5005],a[5005],tot;
int main()
{
    cin>>n;
        for(rg i=1;i<=n;i++)
    {
        ll x=read();
        a[i]=x;
        flag[x]++;
        while(x!=1)
        {
            if(x%2==0)
            {
                x/=2;
                //if(x>=1&&x<=100)
                flag[x]++;
            }
            else
            {
                x=(x*3+1)/2;
                 // if(x>=1&&x<=100)
                flag[x]++;
            }
            //cout<<x<<endl;
        }
    }
    for(rg i=1;i<=n;i++)
    {
        if(flag[a[i]]==1)
        {
            ans[++tot]=a[i];
        }
    }
    sort(ans+1,ans+1+tot,cmp);
    for(rg i=1;i<=tot;i++)
    {
        i!=tot?cout<<ans[i]<<" ":cout<<ans[i];
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
inline bool cmp(const ll &a,const ll &b)
{
    return a>b;
}
ll n,flag[5005],ans[5005],a[5005],tot;
int main()
{
    cin>>n;
        for(rg i=1;i<=n;i++)
    {
        ll x=read();
        a[i]=x;
        flag[x]++;
        while(x!=1)
        {
            if(x%2==0)
            {
                x/=2;
                //if(x>=1&&x<=100)
                flag[x]++;
            }
            else
            {
                x=(x*3+1)/2;
                 // if(x>=1&&x<=100)
                flag[x]++;
            }
            //cout<<x<<endl;
        }
    }
    for(rg i=1;i<=n;i++)
    {
        if(flag[a[i]]==1)
        {
            ans[++tot]=a[i];
        }
    }
    sort(ans+1,ans+1+tot,cmp);
    for(rg i=1;i<=tot;i++)
    {
        i!=tot?cout<<ans[i]<<" ":cout<<ans[i];
    }
    return 0;
}
>>>>>>> a45269a6f9ce61abed19a3dbc4d5ff91c7b4ed44
