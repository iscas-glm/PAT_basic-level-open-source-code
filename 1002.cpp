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
string s;
ll sum=0,a[maxn],tot;
string p[20]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
int main()
{
    cin>>s;
    for(rg i=0;s[i];i++)
    {
        sum+=s[i]-'0';
    }
    while(sum)
    {
        a[++tot]=sum%10;
        sum/=10;
    }
    for(rg i=tot;i>=1;i--)
    {
        i==1?cout<<p[a[i]]:cout<<p[a[i]]<<" ";
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
string s;
ll sum=0,a[maxn],tot;
string p[20]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
int main()
{
    cin>>s;
    for(rg i=0;s[i];i++)
    {
        sum+=s[i]-'0';
    }
    while(sum)
    {
        a[++tot]=sum%10;
        sum/=10;
    }
    for(rg i=tot;i>=1;i--)
    {
        i==1?cout<<p[a[i]]:cout<<p[a[i]]<<" ";
    }
   	return 0;
}
>>>>>>> a45269a6f9ce61abed19a3dbc4d5ff91c7b4ed44
