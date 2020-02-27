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
ll val[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},z[20]={1 ,0 ,-1, 9, 8, 7, 6, 5, 4, 3, 2};
string ans[maxn];
ll tot;
int main()
{
    ll n=read();
    for(rg i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        ll sum=0;
        for(rg j=0;j<=16;j++)
        {
            sum+=(s[j]-48)*val[j];
            sum%=11;
        }
        bool flag=0;
        if(sum==2&&s[17]=='X')
        {
            flag=1;
        }
        if(z[sum]==s[17]-48)flag=1;
        if(!flag)
        {
            ans[++tot]=s;
        }
    }
    if(!tot)
    {
        cout<<"All passed"<<endl;
    }
    else
    {
        for(rg i=1;i<=tot;i++)
        {
            cout<<ans[i]<<endl;
        }
    }
   	return 0;
}
